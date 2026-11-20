
void FUN_03ebf780(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined4 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_98 = *(undefined8 *)(param_2 + 0x18);
  iVar9 = *(int *)(param_2 + 0xf0);
  iVar2 = *(int *)(param_2 + 0xf4);
  *(int *)(param_2 + 0xf8) = iVar9;
  if ((iVar2 == 0) || (iVar9 == 0)) {
    if ((iVar2 == 1) || (iVar9 == 1)) {
      if ((iVar2 == 2) || (iVar9 == 2)) goto LAB_03ebf804;
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(param_2 + 0xf0) = uVar6;
LAB_03ebf804:
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined4 *)(param_3 + 0xa0) = 0;
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0xb0) = 0;
  *(undefined1 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0xa8) = uVar8;
  *(undefined2 *)(param_3 + 0x50) = 0xffff;
  lVar10 = *(long *)(param_2 + 0x98);
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  *(undefined4 *)(lVar10 + 0xb0) = 0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined8 *)(lVar10 + 0xa0) = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + (long)*(int *)(param_2 + 0xf0) * 0x10 + 0xc0) = 0;
  *(undefined2 *)(param_2 + 0xb0) = 0xffff;
  lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
  lStack_90 = param_2;
  local_88 = param_1;
  local_80 = param_3;
  FUN_03ed9c6c(*(undefined8 *)
                (*(long *)(lVar10 + 0x40) + (long)*(int *)(*(long *)(lVar10 + 8) + 0x10) * 8),
               &local_98,*(undefined8 *)(param_2 + 0x70));
  FUN_03ec0ea0(param_4,param_3,*(undefined1 *)(param_2 + 0xac));
  if ((*(long *)(param_2 + 0x28) != 0) &&
     ((*(long *)(param_2 + 0x38) == 0 || ((*(byte *)(*(long *)(param_2 + 0x38) + 0x140) & 1) == 0)))
     ) {
    FUN_03ebfef0(*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_3,
                 *(undefined8 *)(param_2 + 0x40));
  }
  FUN_03eced80(*(undefined8 *)(param_2 + 0x40),param_3);
  FUN_03ebef90(local_88,param_2,param_3);
  *(undefined4 *)(param_2 + (long)*(int *)(param_2 + 0xf0) * 0x10 + 0xc0) = 0;
  if (*(int *)(param_2 + 0x138) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar12 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x50);
      uVar1 = uVar12;
      if (*(uint *)(param_2 + 0x48) <= uVar12) {
        uVar1 = 0;
      }
      uVar13 = (ulong)uVar1;
      puVar14 = (undefined8 *)(lVar10 + uVar13 * 0x98);
      lVar4 = puVar14[0xe];
      if (lVar4 != 0) {
        piVar15 = (int *)(lVar10 + uVar13 * 0x98 + 0x7c);
        if (*piVar15 == *(int *)(param_2 + 0x78)) {
          uVar7 = uVar12;
          if ((*(ushort *)(lVar10 + uVar13 * 0x98 + 0x7a) >> 3 & 1) == 0) {
            FUN_03ed2d40(lVar4,param_2 + (long)*(int *)(param_2 + 0xf0) * 0x10 + 0xc0);
          }
        }
        else {
          FUN_03ed0160(lVar4,&local_98,puVar14);
          lVar10 = lVar10 + uVar13 * 0x98;
          puVar14[0xe] = 0;
          *piVar15 = 0;
          *(undefined1 *)(lVar10 + 0x78) = 0xff;
          *(undefined2 *)(lVar10 + 0x7a) = 0;
          *(undefined4 *)(lVar10 + 0x50) = 0;
          *(undefined8 *)(lVar10 + 0x54) = 0;
          *(undefined2 *)(lVar10 + 0x5c) = 0;
          *(undefined8 *)(lVar10 + 0x90) = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          *(undefined8 *)(lVar10 + 0x80) = 0xbf800000;
          *(undefined8 *)(lVar10 + 0x88) = 0xbf800000bf800000;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          *(undefined8 *)(lVar10 + 0x30) = 0;
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(lVar10 + 0x28) = 0;
          *(undefined8 *)(lVar10 + 0x60) = 0xffffffff;
          *(undefined8 *)(lVar10 + 0x68) = 0;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(param_2 + 0x138));
  }
  lVar10 = *(long *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x138) = uVar7 + 1;
  if ((lVar10 != 0) && ((*(byte *)(lVar10 + 300) & 1) != 0)) {
    FUN_03ec4e30(*(undefined8 *)(param_2 + 0x98),lVar10,*(undefined1 *)(param_2 + 0xac));
    pcVar11 = *(char **)(param_2 + 0x10);
    if (*pcVar11 != '\0') {
      bVar3 = *(byte *)(param_2 + 0xac);
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      local_68 = DAT_041e94bc;
      local_78 = DAT_041e94ac;
      uStack_70 = DAT_041e94b4;
      uVar7 = (uint)bVar3;
      if (*(uint *)(*(long *)(param_2 + 0x38) + 0x130) <= (uint)bVar3) {
        uVar7 = 0;
      }
      plVar5 = *(long **)(*(long *)(*(long *)(param_2 + 0x38) + 0x138) + (ulong)uVar7 * 0x78 + 0x28)
      ;
      pcStack_a0 = pcVar11;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,0x100,&local_a8,(long)&local_78 + (ulong)(bVar3 % 6) * 4);
      }
    }
    lVar10 = *(long *)(param_2 + 0x28);
    if (lVar10 != 0) {
      FUN_03ee1828(*(undefined8 *)(param_2 + 0x38),*(undefined1 *)(param_2 + 0xac),lVar10 + 0xc,
                   lVar10 + 0x18);
    }
  }
  iVar9 = 1;
  if (1 < *(int *)(param_2 + 0x78) + 1U) {
    iVar9 = *(int *)(param_2 + 0x78) + 1;
  }
  *(int *)(param_2 + 0x78) = iVar9;
  *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) | 4;
  return;
}

