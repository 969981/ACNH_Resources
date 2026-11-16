
void FUN_027f0c8c(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar7 = (uint)uVar8;
  uVar5 = (uint)((ulong)uVar8 >> 0x18);
  if ((((param_1[7] != 0) && (iVar3 = *param_1, iVar3 != 0)) && (param_1[7] == param_2[7])) &&
     ((*(long *)(param_2 + 8) == *(long *)(param_1 + 8) &&
      *(long *)(param_2 + 10) == *(long *)(param_1 + 10)) && param_2[0xc] == param_1[0xc])) {
    if (((short)param_1[1] == 0) || ((short)param_2[1] == 0)) {
      if (iVar3 != *param_2) goto LAB_027f0ce8;
    }
    else if ((iVar3 != *param_2) ||
            ((*(long *)(param_2 + 1) != *(long *)(param_1 + 1) ||
             *(long *)(param_2 + 3) != *(long *)(param_1 + 3)) || param_2[5] != param_1[5]))
    goto LAB_027f0ce8;
    if (((uint)*(ushort *)(param_1 + 0x32) == (uVar7 & 0xffff)) &&
       (((uint)*(byte *)((long)param_1 + 0xca) == ((uint)((ulong)uVar8 >> 0x10) & 0xff) &&
        ((uint)*(byte *)((long)param_1 + 0xcb) == (uVar5 & 0xff))))) {
      return;
    }
  }
LAB_027f0ce8:
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar6 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar6;
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar4 = nn::time::IsValidDate(uVar7 & 0xffff,uVar7 >> 0x10 & 0xff,uVar5 & 0xff);
  if ((uVar4 & 1) != 0) {
    *(short *)(param_1 + 0x32) = (short)uVar8;
    *(char *)((long)param_1 + 0xca) = (char)((ulong)uVar8 >> 0x10);
    *(char *)((long)param_1 + 0xcb) = (char)((ulong)uVar8 >> 0x18);
  }
  FUN_027507b0(param_1 + 0xe);
  return;
}

