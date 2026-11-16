
undefined1 * FUN_02583354(long param_1,byte *param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  uint *puVar13;
  undefined *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  byte local_37;
  
  uVar6 = FUN_02582d8c(param_2,param_3);
  if ((int)uVar6 < 0) {
    bVar2 = *param_2;
    uVar11 = (ulong)bVar2;
    if ((uVar11 < 8) && ((*(uint *)(param_1 + 0x431fc0) >> (ulong)(bVar2 & 0x1f) & 1) != 0)) {
      if (3 < *(uint *)(DAT_0537d558 + 0x10) || *(uint *)(DAT_0537d558 + 0x10) == 2) {
        lVar10 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar10 + 0x473);
        pcVar12 = PTR_DAT_04bc1220;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar13 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar13 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar13 & 8) != 0) {
            pcVar12 = (char *)(lVar10 + 0x472);
          }
        }
        cVar3 = *(char *)(lVar10 + uVar11 * 4 + 0x44e);
        cVar9 = *PTR_DAT_04bb5018;
        if (cVar3 != -1) {
          cVar9 = cVar3;
        }
        if (*pcVar12 == cVar9) {
          lVar10 = param_1 + (ulong)(uint)bVar2 * 0x46818;
          local_40 = &LAB_001fdf00 + lVar10;
          local_38 = 1;
          if (*(long **)(&LAB_001fdf28 + lVar10) == (long *)0x0) {
            local_37 = 0;
          }
          else {
            puVar8 = (undefined8 *)**(long **)(&LAB_001fdf28 + lVar10);
            local_37 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              local_37 = (**(code **)*puVar8)();
            }
          }
          local_37 = local_37 & 1;
          local_48 = PTR_DAT_04bb4e08 + 0x10;
          bVar4 = *(byte *)(*(long *)(&LAB_001fdf10 + lVar10) + *(long *)(&LAB_001fdf08 + lVar10) +
                           0x10);
          bVar2 = bVar4;
          if (7 < bVar4) {
            bVar2 = 0xff;
          }
          FUN_02640184(&local_48);
          if (bVar4 < 8) {
            if (DAT_05574040 == 0) {
              return (undefined1 *)0x0;
            }
            puVar7 = (undefined1 *)FUN_026eec4c(DAT_05574040,(int)(char)bVar2);
            return puVar7;
          }
          uVar11 = (ulong)*param_2;
        }
      }
      cVar9 = (char)uVar11;
      bVar5 = 7 < (uint)uVar11;
      if (bVar5) {
        cVar9 = -1;
      }
      puVar7 = &LAB_001fdf00 + param_1 + (ulong)(uint)(int)cVar9 * 0x46818;
      if (bVar5) {
        puVar7 = &LAB_001fdf00 + param_1;
      }
      return puVar7;
    }
  }
  else if ((uVar6 < 8) &&
          (lVar10 = *(long *)PTR_DAT_04bb4fb8,
          *(char *)(lVar10 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) {
    puVar13 = (uint *)(lVar10 + (ulong)uVar6 * 0x13f0);
    uVar1 = puVar13[0x4f4];
    if ((uVar1 < 3 && *puVar13 < 8) && *(long *)PTR_DAT_04bb46b0 != 0) {
      if (uVar1 == 2) {
        puVar7 = (undefined1 *)0x0;
        if (DAT_055021a0 != 0) {
          puVar7 = &LAB_001fdf00 + DAT_055021a0;
        }
        return puVar7;
      }
      if (uVar1 == 0) {
        if (*(byte *)(lVar10 + (ulong)uVar6 * 0x13f0 + 0x13d5) < 8) {
          puVar7 = (undefined1 *)FUN_026eed64();
          return puVar7;
        }
      }
      else {
        uVar11 = (ulong)*(byte *)(lVar10 + (ulong)uVar6 * 0x13f0 + 0x13d5);
        if (((uVar11 < 8) && (lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10), lVar10 != 0)) &&
           (lVar10 = *(long *)(lVar10 + uVar11 * 8 + 0xf0), lVar10 != 0)) {
          return *(undefined1 **)(lVar10 + 0x20);
        }
      }
    }
  }
  return (undefined1 *)0x0;
}

