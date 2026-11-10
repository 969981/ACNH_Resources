
undefined8 FUN_0010dbc0(long *param_1,int param_2,uint param_3,uint param_4,long *param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *unaff_x20;
  ulong unaff_x21;
  
  if (param_2 == 3) {
    puVar6 = (uint *)param_1[4];
    if (puVar6 == (uint *)0x0) {
      return 0xffff909f;
    }
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      uVar1 = param_3 & 0xf;
      if (0xf < param_4) {
        uVar1 = 0;
      }
      unaff_x21 = (ulong)uVar1;
      param_3 = param_3 - uVar1;
      puVar6 = puVar6 + (ulong)((param_3 ^ param_3 >> 8 ^ param_3 >> 0x10) & 0xff ^ param_3 >> 0x18)
                        * 0x10;
      unaff_x20 = puVar6 + 8;
      if (param_3 == *puVar6) goto LAB_0010dd74;
      *(uint *)(*param_1 + 8) = param_3;
      if ((int)param_3 < 0) {
        return 0xffffbc9f;
      }
LAB_0010dc98:
      uVar1 = *(uint *)((long)param_1 + 0x74);
      iVar4 = uVar1 - param_3;
      bVar2 = uVar1 <= param_3 + 0x20;
      bVar3 = param_3 + 0x20 == uVar1;
      iVar5 = 0x20;
LAB_0010dd14:
      if (!bVar2 || bVar3) {
        iVar4 = iVar5;
      }
      iVar4 = nn::fs::ReadFile(**(undefined8 **)*param_1,(long)*(int *)((undefined8 *)*param_1 + 1),
                               unaff_x20,iVar4);
      if (iVar4 != 0) {
        *puVar6 = 0;
        return 0xffffbd9f;
      }
      *puVar6 = param_3;
      goto LAB_0010dd74;
    }
  }
  else if (param_2 == 10) {
    if ((*(byte *)(param_1 + 0xf) >> 2 & 1) == 0) {
      uVar1 = param_3 & 0x3f;
      if (0x3f < param_4) {
        uVar1 = 0;
      }
      unaff_x21 = (ulong)uVar1;
      param_3 = param_3 - uVar1;
      puVar6 = (uint *)(param_1[0xb] +
                       (ulong)((param_3 ^ param_3 >> 8 ^ param_3 >> 0x10) & 0xff ^ param_3 >> 0x18)
                       * 0xa0);
      unaff_x20 = puVar6 + 8;
      if (param_3 == *puVar6) goto LAB_0010dd74;
      *(uint *)(*param_1 + 8) = param_3;
      if ((int)param_3 < 0) {
        return 0xffffbc9f;
      }
      uVar1 = *(uint *)((long)param_1 + 0x74);
      iVar4 = uVar1 - param_3;
      bVar2 = uVar1 <= param_3 + 0x80;
      bVar3 = param_3 + 0x80 == uVar1;
      iVar5 = 0x80;
      goto LAB_0010dd14;
    }
    puVar6 = (uint *)param_1[0xb];
  }
  else {
    if (param_2 != 5) goto LAB_0010dd74;
    if ((*(byte *)(param_1 + 0xf) >> 1 & 1) == 0) {
      uVar1 = param_3 & 0xf;
      if (0xf < param_4) {
        uVar1 = 0;
      }
      unaff_x21 = (ulong)uVar1;
      param_3 = param_3 - uVar1;
      puVar6 = (uint *)(param_1[6] +
                       (ulong)((param_3 ^ param_3 >> 8 ^ param_3 >> 0x10) & 0xff ^ param_3 >> 0x18)
                       * 0x40);
      unaff_x20 = puVar6 + 8;
      if (param_3 == *puVar6) goto LAB_0010dd74;
      *(uint *)(*param_1 + 8) = param_3;
      if ((int)param_3 < 0) {
        return 0xffffbc9f;
      }
      goto LAB_0010dc98;
    }
    puVar6 = (uint *)param_1[6];
  }
  unaff_x21 = 0;
  uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
  unaff_x20 = (uint *)((long)puVar6 + (ulong)(param_3 - (uVar1 >> 0x10 | uVar1 << 0x10)) + 4);
LAB_0010dd74:
  *param_5 = (long)unaff_x20 + (unaff_x21 & 0xffffffff);
  return 1;
}

