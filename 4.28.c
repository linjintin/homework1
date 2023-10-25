#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i;
	double weeklySalary;
	printf("Enter employee salary code:");
	scanf("%d", &i);
	switch (i) {
	case 1: 
	{
		double managerSalary;
		printf("请输入经理的每周工资： ");
		scanf("%lf", &managerSalary);
		weeklySalary = managerSalary;
		break;
	}
	case 2: 
	{
		double hourlyWage, hoursWorked;
		printf("请输入每小时工资： ");
		scanf("%lf", &hourlyWage);
		printf("请输入工作小时数： ");
		scanf("%lf", &hoursWorked);
		if (hoursWorked <= 40) {
			weeklySalary = hourlyWage * hoursWorked;
		}
		else {
			double overtimeHours = hoursWorked - 40;
			weeklySalary = (hourlyWage * 40) + (hourlyWage * 1.5 * overtimeHours);
		}
		break;
	}
	case 3: 
	{
		double baseSalary, totalSales;
		printf("请输入基本工资： ");
		scanf("%lf", &baseSalary);
		printf("请输入每周总销售额： ");
		scanf("%lf", &totalSales);
		weeklySalary = baseSalary + (0.057 * totalSales);
		break;
	}
	case 4: 
	{
		double pieceRate, piecesProduced;
		printf("请输入每件商品的报酬： ");
		scanf("%lf", &pieceRate);
		printf("请输入生产的商品数量： ");
		scanf("%lf", &piecesProduced);
		weeklySalary = pieceRate * piecesProduced;
		break;
	}
	default:
		printf("无效的工资代码。\n");
		return 1;
	}

	printf("员工的周工资为：%.2f\n", weeklySalary);

	return 0;
}
