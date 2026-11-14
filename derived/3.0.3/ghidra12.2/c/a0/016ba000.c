
bool FUN_016ba000(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_1b0;
  long lStack_1a8;
  undefined *local_1a0;
  char *pcStack_198;
  undefined *local_190;
  undefined8 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar6 = (uint *)FUN_016a4df0(*(undefined8 *)PTR_DAT_04bb4930);
  if (puVar6 != (uint *)0x0) {
    local_17c = 0;
    local_180 = 0x40;
    local_178 = 0xffffffff;
    uStack_170 = 0xffffffff00000000;
    puStack_188 = &local_b0;
    local_168 = 0xffffffff;
    puStack_158 = local_14c;
    local_150 = 0x40;
    local_10d = 0;
    local_160 = PTR_DAT_04bb2bc0 + 0x10;
    local_14c[0] = 0;
    local_f8 = 0x40;
    local_b5 = 0;
    local_f4[0] = 0;
    puStack_100 = local_f4;
    local_190 = PTR_DAT_04bb6b18 + 0x10;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar8 = (long)register0x00000008 - 0x30U;
    if ((long)register0x00000008 - 0x30U <= (long)&local_b0 + 2U) {
      uVar8 = (long)&local_b0 + 2U;
    }
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_108 = local_160;
    memset(puStack_188,0,(uVar8 - (long)&local_190) - 0xe0);
    puVar5 = PTR_DAT_04bbc450;
    puVar4 = PTR_DAT_04bbc448;
    local_1b0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_198 = "Hotel_ThemeName";
    if (*puVar6 != 0) {
      cVar7 = *PTR_DAT_04bbc448;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar3) {
            lVar9 = (ulong)uVar3 + (long)puVar6;
            goto LAB_016ba1cc;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        lVar9 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_016ba1cc;
        lVar9 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar9 - (long)puVar10);
        if (lVar1 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        lVar9 = 0;
        if (uVar8 == 0) goto LAB_016ba1cc;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0x54426bb7) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            lVar9 = 0;
            goto LAB_016ba1cc;
          }
        }
        iVar2 = 0;
        if (*piVar11 != -1) {
          iVar2 = *piVar11;
        }
        *(int *)(puVar5 + 0x14) = iVar2;
      } while (*puVar6 != 0);
    }
    lVar9 = 0;
LAB_016ba1cc:
    lStack_1a8 = *(long *)PTR_PTR_04bbddd8;
    if (lVar9 != 0) {
      lStack_1a8 = lVar9;
    }
    local_1a0 = local_1b0;
    FUN_006f50a0(&local_190,&local_1a0,&local_1b0,0);
    FUN_006f4bf4(&local_190,param_1,0);
  }
  return puVar6 != (uint *)0x0;
}

