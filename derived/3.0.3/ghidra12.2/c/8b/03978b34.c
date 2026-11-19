
void FUN_03978b34(long param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (((*PTR_DAT_04bd1460 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1460), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bd1458 = &PTR_LAB_04b685d8;
    __cxa_guard_release(PTR_DAT_04bd1460);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bd1458);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar4 + 2) <= param_2) {
    param_2 = 0;
  }
  pbVar3 = (byte *)(puVar4[3] + (long)(int)param_2 * 0x360);
  *param_3 = 2;
  param_3[1] = *pbVar3 >> 2 & 1;
  param_3[2] = *(undefined4 *)(pbVar3 + 0x10);
  param_3[3] = *(undefined4 *)(pbVar3 + 0x14);
  param_3[4] = *(undefined4 *)(pbVar3 + 0x18);
  param_3[5] = *(undefined4 *)(pbVar3 + 0x1c);
  param_3[6] = *(undefined4 *)(pbVar3 + 0x20);
  param_3[7] = *(undefined4 *)(pbVar3 + 0x24);
  param_3[8] = *(undefined4 *)(pbVar3 + 0x28);
  param_3[9] = *(undefined4 *)(pbVar3 + 0x2c);
  param_3[10] = *(undefined4 *)(pbVar3 + 0x30);
  param_3[0xb] = *(undefined4 *)(pbVar3 + 0x6c);
  param_3[0xc] = *(undefined4 *)(pbVar3 + 0x70);
  param_3[0xd] = *(undefined4 *)(pbVar3 + 0x74);
  param_3[0xe] = *(undefined4 *)(pbVar3 + 0x78);
  param_3[0xf] = *(undefined4 *)(pbVar3 + 0x7c);
  param_3[0x10] = *(undefined4 *)(pbVar3 + 0x80);
  param_3[0x11] = *(undefined4 *)(pbVar3 + 0x84);
  param_3[0x12] = *(undefined4 *)(pbVar3 + 0x88);
  return;
}

