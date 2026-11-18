
void FUN_032c9980(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  void *__src;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *__dest;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined **local_98;
  long lStack_90;
  undefined **local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined4 local_64;
  
  puVar6 = PTR_PTR_04bb2238;
  lVar14 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  if (lVar14 != 0) {
    uVar10 = 0;
    do {
      lVar13 = *(long *)(lVar14 + 0x98);
      lVar4 = param_1 + uVar10 * 0x210;
      if (0x1d < uVar10) {
        lVar4 = param_1;
      }
      local_88 = &PTR_LAB_048f9770;
      local_80 = &DAT_040a1c2c;
      if (lVar13 == lVar14 + 0x90) {
        puVar9 = (undefined8 *)(puVar6 + 8);
      }
      else {
        lVar12 = lVar13 + -0x30;
        do {
          (**(code **)(*(long *)(lVar13 + -0x30) + 0x18))(lVar12);
          (**(code **)(*(long *)(lVar13 + -0x30) + 0x18))(lVar12);
          puVar15 = *(undefined1 **)(lVar12 + 8);
          (*(code *)local_88[3])(&local_88);
          if (puVar15 == local_80) {
LAB_032c9b40:
            puVar9 = (undefined8 *)(lVar12 + 0x20);
            goto LAB_032c9b4c;
          }
          uVar11 = 0;
          bVar7 = true;
          lVar1 = *(long *)(lVar12 + 8) + 1;
          do {
            lVar2 = lVar1 + uVar11;
            cVar5 = *(char *)(lVar2 + -1);
            if (cVar5 != local_80[uVar11]) break;
            if (cVar5 == '\0') {
              if (bVar7) goto LAB_032c9b40;
              break;
            }
            cVar5 = *(char *)(lVar1 + uVar11);
            if (cVar5 != local_80[uVar11 + 1]) break;
            if (cVar5 == '\0') goto LAB_032c9b40;
            cVar5 = *(char *)(lVar2 + 1);
            if (cVar5 != local_80[uVar11 + 2]) break;
            if (cVar5 == '\0') goto LAB_032c9b40;
            bVar7 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
          lVar13 = *(long *)(lVar13 + 8);
          lVar12 = lVar13 + -0x30;
        } while (lVar12 != lVar14 + 0x60);
        puVar9 = (undefined8 *)(puVar6 + 8);
      }
LAB_032c9b4c:
      __src = (void *)*puVar9;
      __dest = *(void **)(lVar4 + 8);
      if (__dest != __src) {
        lVar13 = 0;
        do {
          if (*(char *)((long)__src + lVar13) == '\0') goto LAB_032c9b9c;
          if (*(char *)((long)__src + lVar13 + 1) == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_032c9b9c;
          }
          if (*(char *)((long)__src + lVar13 + 2) == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_032c9b9c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_032c9b9c:
        iVar3 = (int)lVar13;
        if (*(int *)(lVar4 + 0x10) <= (int)lVar13) {
          iVar3 = *(int *)(lVar4 + 0x10) + -1;
        }
        memcpy(__dest,__src,(long)iVar3);
        *(undefined1 *)((long)__dest + (long)iVar3) = 0;
      }
      uVar11 = 0;
      do {
        local_64 = 0;
        local_78 = 8;
        local_6d = 0;
        local_74[0] = 0;
        local_88 = &PTR_LAB_04908da0;
        local_80 = local_74;
        FUN_038d1270(&local_88,&DAT_0410081a,uVar11 & 0xffffffff);
        lVar13 = FUN_038f2a70(lVar14 + -8,&local_88);
        if (lVar13 != 0) {
          lStack_90 = *(long *)(puVar6 + 8);
          if (*(long *)(lVar13 + 0x80) != 0) {
            lStack_90 = *(long *)(lVar13 + 0x80);
          }
          local_98 = &PTR_LAB_048f9770;
          uVar8 = FUN_038d2c30(&local_64,&local_98,0xffffffff);
          if ((uVar8 & 1) != 0) {
            *(undefined4 *)(lVar4 + 0x38 + uVar11 * 4) = local_64;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x75);
      lVar14 = *(long *)(lVar14 + 0x10);
      uVar10 = uVar10 + 1;
    } while (lVar14 != 0);
  }
  return;
}

