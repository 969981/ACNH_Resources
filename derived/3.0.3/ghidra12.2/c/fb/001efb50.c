
void * FUN_001efb50(long param_1,void *param_2,size_t param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint __c;
  int iVar6;
  void *__dest;
  long lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  ulong uVar10;
  byte *pbVar12;
  byte *pbVar11;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  byte *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  __dest = (void *)FUN_00187df4(param_3);
  memcpy(__dest,param_2,param_3);
  puVar14 = *(undefined8 **)(param_1 + 0x10);
  if (puVar14 == *(undefined8 **)(param_1 + 0x18)) {
    plVar1 = (long *)(param_1 + 8);
    uVar10 = (long)puVar14 - *plVar1;
    uVar2 = ((long)uVar10 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      auVar19 = FUN_001f4808(plVar1);
      lVar7 = auVar19._0_8_;
      local_70 = 0x1efc50;
      plVar1 = (long *)(lVar7 + 0x1b8);
      (**(code **)(*(long *)(lVar7 + 0x1b8) + 0x10))(plVar1);
      sVar9 = strlen(auVar19._8_8_);
      uVar2 = sVar9 + 1;
      local_78 = 0;
      local_88 = (byte *)0x0;
      uStack_80 = 0;
      if (sVar9 != 0xffffffffffffffff) {
        if ((long)uVar2 < 0) {
          FUN_001dd178(&local_88);
          return (void *)0x1;
        }
        local_88 = (byte *)FUN_00187df4(uVar2);
        pbVar12 = local_88;
        for (uVar10 = uVar2 & 7; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar12 = 0;
          pbVar12 = pbVar12 + 1;
        }
        if (6 < sVar9) {
          do {
            pbVar11 = pbVar12 + 8;
            pbVar12[0] = 0;
            pbVar12[1] = 0;
            pbVar12[2] = 0;
            pbVar12[3] = 0;
            pbVar12[4] = 0;
            pbVar12[5] = 0;
            pbVar12[6] = 0;
            pbVar12[7] = 0;
            pbVar12 = pbVar11;
          } while (pbVar11 != local_88 + uVar2);
        }
      }
      pbVar12 = local_88;
      strcpy((char *)local_88,auVar19._8_8_);
      __c = (uint)*pbVar12;
      if (*pbVar12 != 0) {
        do {
          iVar6 = tolower(__c);
          *pbVar12 = (byte)iVar6;
          __c = (uint)pbVar12[1];
          pbVar12 = pbVar12 + 1;
        } while (__c != 0);
        pbVar12 = local_88;
      }
      lVar17 = *(long *)(lVar7 + 0x2c0);
      bVar5 = false;
      lVar18 = *(long *)(lVar7 + 0x2c8);
      lVar15 = *(long *)(lVar7 + 0x2d0);
      lVar13 = lVar17;
      if ((lVar15 != 0 || lVar17 != lVar18) || lVar18 != lVar17) {
        do {
          if ((lVar18 == lVar17) && (bVar5)) goto LAB_001efdb8;
          iVar6 = strcmp((char *)pbVar12,*(char **)(*(long *)(lVar7 + 0x2a8) + lVar18 * 0x10));
          lVar13 = *(long *)(lVar7 + 0x2c0);
          if (iVar6 == 0) {
            lVar15 = *(long *)(lVar7 + 0x2d0);
            lVar17 = lVar18;
            goto LAB_001efdb8;
          }
          uVar10 = *(ulong *)(lVar7 + 0x2d8);
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = (lVar18 + 1U) / uVar10;
          }
          lVar18 = (lVar18 + 1U) - uVar2 * uVar10;
          bVar5 = lVar13 == lVar18;
          lVar15 = *(long *)(lVar7 + 0x2d0);
        } while ((lVar15 != 0 || lVar13 != lVar18) || lVar18 != lVar17);
      }
      lVar15 = 0;
LAB_001efdb8:
      if (!bVar5 && lVar15 != 0 || lVar13 != lVar17) {
        FUN_0018a58c(param_3,*(undefined8 *)(*(long *)(lVar7 + 0x2a8) + lVar17 * 0x10 + 8));
      }
      if (pbVar12 != (byte *)0x0) {
        FUN_00187e4c(pbVar12);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return (void *)(ulong)(((bVar5 || lVar15 == 0) && lVar13 == lVar17) ^ 1);
    }
    uVar3 = (long)uVar10 >> 2;
    if ((ulong)((long)uVar10 >> 2) <= uVar2) {
      uVar3 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_00187df4(uVar3 << 3);
    }
    puVar14 = (undefined8 *)(lVar7 + ((long)uVar10 >> 3) * 8);
    puVar16 = puVar14 + 1;
    *puVar14 = __dest;
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    if (puVar8 != puVar4) {
      do {
        puVar8 = puVar8 + -1;
        puVar14 = puVar14 + -1;
        *puVar14 = *puVar8;
      } while (puVar8 != puVar4);
      puVar8 = (undefined8 *)*plVar1;
    }
    *(undefined8 **)(param_1 + 8) = puVar14;
    *(undefined8 **)(param_1 + 0x10) = puVar16;
    *(ulong *)(param_1 + 0x18) = lVar7 + uVar3 * 8;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00187e4c();
      return __dest;
    }
  }
  else {
    *puVar14 = __dest;
    *(undefined8 **)(param_1 + 0x10) = puVar14 + 1;
  }
  return __dest;
}

