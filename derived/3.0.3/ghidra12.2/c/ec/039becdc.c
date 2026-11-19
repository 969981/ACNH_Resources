
void FUN_039becdc(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_60;
  undefined4 local_58;
  float fStack_54;
  
  local_60 = *(undefined8 *)(param_1 + 0x78);
  local_58 = *(undefined4 *)(param_1 + 0x80);
  lVar5 = param_2[2];
  fStack_54 = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x84);
  lVar2 = param_2[6];
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  iVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar6 = *(long *)param_2[1];
  bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar6 + 8) * 4];
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((ulong)bVar1 != 0) {
    memcpy((void *)(lVar5 + (ulong)(((int)lVar2 + iVar3) - 1U & -iVar4) * (long)param_3 +
                   (ulong)*(ushort *)(lVar6 + 4)),&local_60,(ulong)bVar1 << 2);
  }
  return;
}

