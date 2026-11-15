
void FUN_0211ca7c(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  
  if (*param_2 == 0) {
    return;
  }
  if (*param_2 == *(int *)(param_1 + 0xf0)) {
    *(short *)(param_1 + 0x13c) = (short)param_2[5];
    *(undefined1 *)(param_1 + 0x13e) = *(undefined1 *)((long)param_2 + 0x16);
    *(undefined1 *)(param_1 + 0x13f) = *(undefined1 *)((long)param_2 + 0x17);
    *(int *)(param_1 + 0x140) = param_2[6];
    *(short *)(param_1 + 0x144) = (short)param_2[7];
    *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)((long)param_2 + 0x1e);
    *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)((long)param_2 + 0x1f);
    *(int *)(param_1 + 0x148) = param_2[8];
    *(short *)(param_1 + 0x14c) = (short)param_2[9];
    *(undefined1 *)(param_1 + 0x14e) = *(undefined1 *)((long)param_2 + 0x26);
    *(undefined1 *)(param_1 + 0x14f) = *(undefined1 *)((long)param_2 + 0x27);
    *(int *)(param_1 + 0x150) = param_2[10];
    *(short *)(param_1 + 0x154) = (short)param_2[0xb];
    *(undefined1 *)(param_1 + 0x156) = *(undefined1 *)((long)param_2 + 0x2e);
    *(undefined1 *)(param_1 + 0x157) = *(undefined1 *)((long)param_2 + 0x2f);
    *(int *)(param_1 + 0x158) = param_2[0xc];
    *(short *)(param_1 + 0x15c) = (short)param_2[0xd];
    *(undefined1 *)(param_1 + 0x15e) = *(undefined1 *)((long)param_2 + 0x36);
    *(undefined1 *)(param_1 + 0x15f) = *(undefined1 *)((long)param_2 + 0x37);
    *(int *)(param_1 + 0x160) = param_2[0xe];
    *(short *)(param_1 + 0x164) = (short)param_2[0xf];
    *(undefined1 *)(param_1 + 0x166) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)(param_1 + 0x167) = *(undefined1 *)((long)param_2 + 0x3f);
    *(int *)(param_1 + 0x168) = param_2[0x10];
    *(short *)(param_1 + 0x16c) = (short)param_2[0x11];
    *(undefined1 *)(param_1 + 0x16e) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)(param_1 + 0x16f) = *(undefined1 *)((long)param_2 + 0x47);
    *(int *)(param_1 + 0x170) = param_2[0x12];
    *(short *)(param_1 + 0x174) = (short)param_2[0x13];
    *(undefined1 *)(param_1 + 0x176) = *(undefined1 *)((long)param_2 + 0x4e);
    *(undefined1 *)(param_1 + 0x177) = *(undefined1 *)((long)param_2 + 0x4f);
    *(int *)(param_1 + 0x178) = param_2[0x14];
    *(short *)(param_1 + 0x17c) = (short)param_2[0x15];
    *(undefined1 *)(param_1 + 0x17e) = *(undefined1 *)((long)param_2 + 0x56);
    *(undefined1 *)(param_1 + 0x17f) = *(undefined1 *)((long)param_2 + 0x57);
    puVar4 = PTR_DAT_04bb3238;
    *(int *)(param_1 + 0x180) = param_2[0x16];
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)puVar4;
    return;
  }
  uVar5 = FUN_02119c7c(param_1,param_2);
  if (uVar5 == 0xffffffff) {
    return;
  }
  if (uVar5 < *(uint *)(param_1 + 0x1e8)) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar5 * 8);
    cVar3 = *(char *)(lVar9 + 0x1d8);
  }
  else {
    lVar9 = 0;
    cVar3 = DAT_000001d8;
  }
  if (cVar3 == '\0') {
    lVar1 = param_1 + 8;
    if (uVar5 != 0xfffffffe) {
      lVar1 = lVar9;
    }
    if (*(int *)(param_1 + 0x1604) == 1) {
      if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar7,0);
        if ((iVar6 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))
           ) {
          uVar5 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
          puVar8 = (undefined1 *)(lVar1 + 8);
          if (uVar5 < 8) {
            puVar8 = puVar8 + (ulong)uVar5 * 0x1c;
          }
          goto LAB_0211cd70;
        }
      }
      puVar8 = (undefined1 *)(lVar1 + 8);
    }
    else {
      puVar8 = (undefined1 *)(lVar1 + 0xcc);
    }
LAB_0211cd70:
    *(short *)(lVar1 + 0x134) = (short)param_2[5];
    *(undefined1 *)(lVar1 + 0x136) = *(undefined1 *)((long)param_2 + 0x16);
    *(undefined1 *)(lVar1 + 0x137) = *(undefined1 *)((long)param_2 + 0x17);
    *(int *)(lVar1 + 0x138) = param_2[6];
    *(short *)(lVar1 + 0x13c) = (short)param_2[7];
    *(undefined1 *)(lVar1 + 0x13e) = *(undefined1 *)((long)param_2 + 0x1e);
    *(undefined1 *)(lVar1 + 0x13f) = *(undefined1 *)((long)param_2 + 0x1f);
    *(int *)(lVar1 + 0x140) = param_2[8];
    *(short *)(lVar1 + 0x144) = (short)param_2[9];
    *(undefined1 *)(lVar1 + 0x146) = *(undefined1 *)((long)param_2 + 0x26);
    *(undefined1 *)(lVar1 + 0x147) = *(undefined1 *)((long)param_2 + 0x27);
    *(int *)(lVar1 + 0x148) = param_2[10];
    *(short *)(lVar1 + 0x14c) = (short)param_2[0xb];
    *(undefined1 *)(lVar1 + 0x14e) = *(undefined1 *)((long)param_2 + 0x2e);
    *(undefined1 *)(lVar1 + 0x14f) = *(undefined1 *)((long)param_2 + 0x2f);
    *(int *)(lVar1 + 0x150) = param_2[0xc];
    *(short *)(lVar1 + 0x154) = (short)param_2[0xd];
    *(undefined1 *)(lVar1 + 0x156) = *(undefined1 *)((long)param_2 + 0x36);
    *(undefined1 *)(lVar1 + 0x157) = *(undefined1 *)((long)param_2 + 0x37);
    *(int *)(lVar1 + 0x158) = param_2[0xe];
    *(short *)(lVar1 + 0x15c) = (short)param_2[0xf];
    *(undefined1 *)(lVar1 + 0x15e) = *(undefined1 *)((long)param_2 + 0x3e);
    *(undefined1 *)(lVar1 + 0x15f) = *(undefined1 *)((long)param_2 + 0x3f);
    *(int *)(lVar1 + 0x160) = param_2[0x10];
    *(short *)(lVar1 + 0x164) = (short)param_2[0x11];
    *(undefined1 *)(lVar1 + 0x166) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)(lVar1 + 0x167) = *(undefined1 *)((long)param_2 + 0x47);
    *(int *)(lVar1 + 0x168) = param_2[0x12];
    *(short *)(lVar1 + 0x16c) = (short)param_2[0x13];
    *(undefined1 *)(lVar1 + 0x16e) = *(undefined1 *)((long)param_2 + 0x4e);
    *(undefined1 *)(lVar1 + 0x16f) = *(undefined1 *)((long)param_2 + 0x4f);
    *(int *)(lVar1 + 0x170) = param_2[0x14];
    *(short *)(lVar1 + 0x174) = (short)param_2[0x15];
    *(undefined1 *)(lVar1 + 0x176) = *(undefined1 *)((long)param_2 + 0x56);
    *(undefined1 *)(lVar1 + 0x177) = *(undefined1 *)((long)param_2 + 0x57);
    *(int *)(lVar1 + 0x178) = param_2[0x16];
    if ((char)param_2[0x19] != '\0') {
      *(undefined4 *)(lVar1 + 0xe8) = DAT_04c9a0c8;
    }
    *puVar8 = 1;
    *(int *)(puVar8 + 4) = param_2[1];
    *(int *)(puVar8 + 8) = param_2[2];
    *(int *)(puVar8 + 0xc) = param_2[3];
    *(int *)(puVar8 + 0x10) = param_2[4];
    *(int *)(puVar8 + 0x14) = param_2[0x17];
    *(int *)(puVar8 + 0x18) = param_2[0x18];
    return;
  }
  if (*(int *)(param_1 + 0x1604) == 1) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar6 = FUN_006bd550(*puVar7,0);
      if ((iVar6 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
      {
        uVar2 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        puVar8 = (undefined1 *)(lVar9 + 8);
        if (uVar2 < 8) {
          puVar8 = puVar8 + (ulong)uVar2 * 0x1c;
        }
        goto LAB_0211cd4c;
      }
    }
    puVar8 = (undefined1 *)(lVar9 + 8);
  }
  else {
    puVar8 = (undefined1 *)(lVar9 + 0xcc);
  }
LAB_0211cd4c:
  *puVar8 = 0;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar5 * 8) + 0x1d8) = 0;
  return;
}

