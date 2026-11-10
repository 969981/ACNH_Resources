
void FUN_002826b0(undefined8 param_1,long param_2,void *param_3,uint param_4,int *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar3 = *(ushort *)(param_2 + 0x3c);
  uVar14 = (uint)uVar3 * (uint)*(byte *)(param_2 + 0x3f) * (uint)uVar3;
  if ((uVar14 & 7) != 0) {
    uVar14 = (uVar14 & 0x7ffffff8) + 8;
  }
  uVar14 = uVar14 >> 3;
  if (param_4 < uVar14 + (uint)uVar3 * 4 + 4) {
    *param_5 = 0;
  }
  else if (param_3 != (void *)0x0) {
    memset(param_3,0,(ulong)param_4);
    uVar12 = (uint)*(ushort *)(param_2 + 0x3c);
    if (*(ushort *)(param_2 + 0x3c) != 0) {
      uVar8 = 0;
      iVar11 = 0;
      uVar5 = 0;
      uVar6 = 0;
      do {
        uVar13 = 0;
        uVar9 = 0;
        do {
          bVar2 = *(byte *)(*(long *)(param_2 + 8) + (ulong)(uVar12 * uVar8) + (ulong)uVar13);
          iVar11 = (uint)*(byte *)(param_2 + 0x3f) + iVar11;
          uVar12 = 8 - iVar11;
          uVar10 = (uint)(char)uVar12;
          uVar7 = uVar6;
          if ((uVar12 >> 7 & 1) != 0) {
            uVar7 = (ulong)((int)uVar6 + 1);
            *(byte *)((long)param_3 + uVar6) =
                 *(char *)((long)param_3 + uVar6) +
                 (bVar2 >> (ulong)(-uVar10 & 0x1f) &
                 ((byte)(-1 << (ulong)(uVar10 + *(byte *)(param_2 + 0x3f) & 0x1f)) ^ 0xff));
            uVar10 = 0x10 - iVar11;
          }
          bVar4 = (uVar10 & 0xff) == 0;
          uVar9 = uVar9 + 1;
          uVar12 = (uint)uVar7;
          if (bVar4) {
            uVar12 = uVar12 + 1;
          }
          uVar6 = (ulong)uVar12;
          *(byte *)((long)param_3 + uVar7) =
               *(char *)((long)param_3 + uVar7) + (bVar2 << (ulong)(uVar10 & 0x1f));
          uVar13 = uVar9 & 0xff;
          iVar11 = 0;
          if (!bVar4) {
            iVar11 = 8 - uVar10;
          }
          uVar12 = (uint)*(ushort *)(param_2 + 0x3c);
        } while (uVar13 < uVar12);
        uVar5 = uVar5 + 1;
        uVar8 = uVar5 & 0xff;
      } while (uVar8 < uVar12);
      if (uVar12 != 0) {
        uVar6 = 0;
        do {
          uVar7 = uVar6 & 0xff;
          uVar12 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar12;
          uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x18) + uVar7 * 4);
          *(char *)((long)param_3 + (ulong)uVar14) = (char)((uint)uVar1 >> 0x18);
          *(char *)((long)param_3 + (ulong)(uVar14 + 1)) = (char)((uint)uVar1 >> 0x10);
          *(char *)((long)param_3 + (ulong)(uVar14 + 2)) = (char)((uint)uVar1 >> 8);
          uVar5 = uVar14 + 3;
          uVar14 = uVar14 + 4;
          *(char *)((long)param_3 + (ulong)uVar5) = (char)uVar1;
        } while ((uVar12 & 0xff) < (uint)*(ushort *)(param_2 + 0x3c));
      }
    }
    memcpy((void *)((long)param_3 + (ulong)uVar14),(void *)(param_2 + 0x48),4);
    local_44 = 0;
    *param_5 = uVar14 + 4;
    goto LAB_00282878;
  }
  local_44 = 0x10c07;
LAB_00282878:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

