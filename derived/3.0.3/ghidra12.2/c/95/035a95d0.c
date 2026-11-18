
void FUN_035a95d0(ushort *param_1,int param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  iVar6 = -1;
  iVar7 = -1;
  if (param_4 == (ushort *)0x0) {
    do {
      uVar3 = *param_1;
      uVar1 = iVar7 + param_2;
      if (((uint)uVar3 <= (uVar1 & 0xffff)) &&
         ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)param_1[6]) - 1 & 0xffff))) {
        uVar4 = param_1[1];
        uVar2 = iVar6 + param_3;
        if (((uint)uVar4 <= (uVar2 & 0xffff)) &&
           ((uVar2 & 0xffff) <= (((uint)uVar4 + (uint)param_1[8]) - 1 & 0xffff))) {
          lVar8 = *(long *)(param_1 + 0x20);
          uVar1 = (*(int *)(lVar8 + 0x1c) * ((uVar2 & 0xffff) - (uint)uVar4) - (uint)uVar3) +
                  (uVar1 & 0xffff);
          uVar5 = 1 << (ulong)(uVar1 & 0x1f);
          uVar2 = *(uint *)(*(long *)(lVar8 + 0x10) + (long)((int)uVar1 >> 5) * 4);
          if ((uVar5 & uVar2) != 0) {
            *(uint *)(*(long *)(lVar8 + 0x10) + ((long)((ulong)uVar1 << 0x20) >> 0x25) * 4) =
                 uVar2 & (uVar5 ^ 0xffffffff);
            *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
          }
        }
      }
      if (iVar7 < 2) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = -1;
      }
    } while ((iVar7 != -1) || (iVar6 != 3));
  }
  else {
    do {
      uVar3 = *param_1;
      uVar1 = iVar7 + param_2;
      if (((uint)uVar3 <= (uVar1 & 0xffff)) &&
         ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)param_1[6]) - 1 & 0xffff))) {
        uVar4 = param_1[1];
        uVar2 = iVar6 + param_3;
        if ((((uint)uVar4 <= (uVar2 & 0xffff)) &&
            ((uVar2 & 0xffff) <= (((uint)uVar4 + (uint)param_1[8]) - 1 & 0xffff))) &&
           (((uint)*param_4 != (uVar1 & 0xffff) || ((uint)param_4[1] != (uVar2 & 0xffff))))) {
          lVar8 = *(long *)(param_1 + 0x20);
          uVar1 = (*(int *)(lVar8 + 0x1c) * ((uVar2 & 0xffff) - (uint)uVar4) - (uint)uVar3) +
                  (uVar1 & 0xffff);
          uVar5 = 1 << (ulong)(uVar1 & 0x1f);
          uVar2 = *(uint *)(*(long *)(lVar8 + 0x10) + (long)((int)uVar1 >> 5) * 4);
          if ((uVar5 & uVar2) != 0) {
            *(uint *)(*(long *)(lVar8 + 0x10) + ((long)((ulong)uVar1 << 0x20) >> 0x25) * 4) =
                 uVar2 & (uVar5 ^ 0xffffffff);
            *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
          }
        }
      }
      if (iVar7 < 2) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = -1;
      }
    } while ((iVar7 != -1) || (iVar6 != 3));
  }
  return;
}

