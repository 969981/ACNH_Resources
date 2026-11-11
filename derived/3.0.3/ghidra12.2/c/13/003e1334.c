
void FUN_003e1334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [8];
  int local_110;
  undefined1 auStack_78 [40];
  
  uVar3 = FUN_003c5b84();
  lVar4 = FUN_003cbb70(uVar3,0x70,1);
  *(undefined4 *)(lVar4 + 8) = 0x2d;
  *(long *)(lVar4 + 0x18) = param_1 + 0x240;
  uVar6 = param_4[2];
  uVar1 = param_4[1];
  *(undefined8 *)(lVar4 + 0x20) = *param_4;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  uVar7 = param_4[5];
  uVar1 = param_4[3];
  uVar6 = param_4[4];
  uVar2 = *(undefined4 *)(param_4 + 6);
  *(undefined8 *)(lVar4 + 0x58) = param_2;
  *(undefined8 *)(lVar4 + 0x60) = param_3;
  *(char *)(lVar4 + 0x68) = (char)param_5;
  *(undefined4 *)(lVar4 + 0x50) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = uVar6;
  *(undefined8 *)(lVar4 + 0x48) = uVar7;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  FUN_003cc15c(uVar3,lVar4);
  *(char *)(param_1 + 0x238) = (char)param_5;
  *(undefined8 *)(param_1 + 0x230) = param_3;
  *(undefined1 *)(param_1 + 0x23a) = 1;
  FUN_003d40cc(auStack_78,param_3,param_5);
  uVar5 = FUN_003d41bc(auStack_78,auStack_118,0);
  if ((uVar5 & 1) != 0) {
    if (1 < local_110) {
      local_110 = 2;
    }
    *(int *)(param_1 + 0x23c) = local_110;
  }
  return;
}

