
void FUN_001a14b8(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04bcc248;
  param_1[2] = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)param_2;
  bVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  if ((bVar2 & 1) != 0) {
    if (((int)param_2[7] == 4) &&
       (uVar3 = (**(code **)(*param_2 + 0x60))(param_2,8), (uVar3 & 1) != 0)) {
      (**(code **)(*param_2 + 0x28))(param_2,8);
      *(undefined4 *)(param_2 + 7) = 8;
    }
    *(int *)((long)param_2 + 0x3c) = *(int *)((long)param_2 + 0x3c) + 1;
  }
  *(byte *)(param_1 + 3) = bVar2 & 1;
  return;
}

