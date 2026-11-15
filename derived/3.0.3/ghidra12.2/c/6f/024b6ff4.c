
void FUN_024b6ff4(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024b7220;
  bVar10 = *(byte *)(param_1 + 0x1ee8);
  lVar7 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  bVar11 = *(byte *)(lVar7 + 0x44);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if (bVar10 == bVar11) {
    lVar9 = 0;
LAB_024b7124:
    lVar7 = lVar7 + 0x40 + lVar9 * 0x20;
  }
  else {
    bVar11 = *(byte *)(lVar7 + 100);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 1;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0x84);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 2;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0xa4);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 3;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0xc4);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 4;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0xe4);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 5;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0x104);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 6;
      goto LAB_024b7124;
    }
    bVar11 = *(byte *)(lVar7 + 0x124);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) {
      lVar9 = 7;
      goto LAB_024b7124;
    }
    lVar7 = lVar7 + 0x140;
  }
  uVar5 = FUN_013ec620(lVar7 + 0xc);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_013ecc74(lVar7 + 0xc), (uVar5 & 1) != 0)) {
    local_84 = 2.18603e-43;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    lVar7 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar7 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar7,0x9c);
  }
LAB_024b7220:
  local_54 = 0;
  local_58 = 0x3f800000;
  local_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_5f = 0;
  local_5c = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_84 = (float)*(undefined8 *)(param_1 + 0x1900);
  local_80 = (float)((ulong)*(undefined8 *)(param_1 + 0x1900) >> 0x20);
  fStack_78 = (float)(int)*(short *)(param_1 + 0x190c) * 0.25;
  local_60 = *(byte *)(param_1 + 0x1ee8);
  local_70 = 0x3a83126f;
  uStack_68 = 0;
  if (7 < local_60) {
    local_60 = 0xff;
  }
  local_7c = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x190e) * 0.001;
  local_5e = *(char *)(param_1 + 0x1920) != '\0';
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_0170d1d8(puVar6,&local_84);
  if (*(int *)(param_1 + 0x178) == 1) {
    local_80 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_84 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_7c = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar6 + 0x4f,&local_84);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_38 = CONCAT44(local_38._4_4_,10);
      local_84 = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return;
      }
    }
    iVar4 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar3 = iVar4 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar8 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar8 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar8) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar8;
      if (iVar3 <= iVar8) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar8) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar4;
  }
  return;
}

