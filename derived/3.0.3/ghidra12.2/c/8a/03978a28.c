
void FUN_03978a28(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bd1448 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd1448), iVar2 != 0))
  {
    *(undefined ***)PTR_DAT_04bd1440 = &PTR_LAB_04b685c0;
    __cxa_guard_release(PTR_DAT_04bd1448);
  }
  uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bd1440);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  uVar1 = *(uint *)(puVar5 + 2);
  lVar4 = puVar5[3];
  *param_3 = 1;
  if (uVar1 <= param_2) {
    param_2 = 0;
  }
  lVar4 = lVar4 + (long)(int)param_2 * 0x70;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(lVar4 + 0x20);
  uVar6 = *(undefined4 *)(lVar4 + 0x24);
  param_3[4] = 0x3f80000000000000;
  param_3[5] = 0x3dcccccd00000000;
  *(undefined4 *)((long)param_3 + 0x1c) = uVar6;
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar4 + 0x4c);
  fVar7 = *(float *)(lVar4 + 0x48);
  *(undefined4 *)(param_3 + 7) = 0x3f800000;
  *(float *)((long)param_3 + 0x34) = fVar7 + fVar7;
  return;
}

