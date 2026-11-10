
void FUN_003482c0(long param_1,uint param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_90 [16];
  
  puVar4 = local_90;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    puVar5 = local_90 + 8;
    do {
      lVar6 = *param_3;
      if (lVar6 != 0) {
        uVar1 = *(undefined8 *)(lVar6 + 0x10);
        *puVar5 = *(undefined8 *)(lVar6 + 8);
        *puVar4 = uVar1;
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_4 + 8);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
  }
  (**(code **)PTR_DAT_04bcf1e0)
            (*(undefined8 *)(param_1 + 0xb0),param_2,local_90 + 8,local_90,uVar1,uVar2);
  return;
}

