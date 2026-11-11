
void FUN_004ce670(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *__dest;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  int local_78;
  long local_70;
  long local_68;
  
  local_70 = param_3;
  local_68 = param_3;
  uVar6 = FUN_00428440(param_3);
  switch(uVar6 & 0x1f) {
  case 2:
  case 4:
    uVar10 = FUN_00428440(param_3);
    if ((uVar10 & 0x1f) != 4) {
      param_3 = 0;
    }
    iVar8 = FUN_00428440(param_3);
    if (iVar8 == 0x2004) {
      local_90 = CONCAT71(local_90._1_7_,0xff);
      plVar19 = *(long **)(param_1 + 2);
      if (*plVar19 < plVar19[1]) {
        memcpy(&local_90,(void *)*plVar19,1);
        *plVar19 = *plVar19 + 1;
      }
      else {
        FUN_0049e700(plVar19,&local_90,1);
      }
      uVar5 = (byte)local_90;
      iVar8 = FUN_00429050(&local_68);
      *(undefined1 *)(param_2 + iVar8) = uVar5;
      return;
    }
    local_90 = CONCAT71(local_90._1_7_,0xff);
    plVar19 = *(long **)(param_1 + 2);
    if (*plVar19 < plVar19[1]) {
      memcpy(&local_90,(void *)*plVar19,1);
      *plVar19 = *plVar19 + 1;
      uVar13 = local_90;
    }
    else {
      FUN_0049e700(plVar19,&local_90,1);
      uVar13 = local_90;
    }
    bVar15 = (char)(byte)local_90 < '\0';
    uVar14 = (ulong)((byte)local_90 >> 1) & 0x3f;
    local_90 = uVar13;
    if (bVar15) {
      uVar10 = 6;
      do {
        local_90 = CONCAT71(local_90._1_7_,0xff);
        plVar19 = *(long **)(param_1 + 2);
        if (*plVar19 < plVar19[1]) {
          memcpy(&local_90,(void *)*plVar19,1);
          *plVar19 = *plVar19 + 1;
        }
        else {
          FUN_0049e700(plVar19,&local_90,1);
        }
        uVar14 = (local_90 & 0x7f) << (uVar10 & 0x3f) | uVar14;
        bVar15 = (char)(byte)local_90 < '\0';
        uVar10 = (ulong)((int)uVar10 + 7);
      } while (bVar15);
    }
    uVar10 = -uVar14;
    if ((uVar13 & 1) == 0) {
      uVar10 = uVar14;
    }
    goto LAB_004ceab8;
  case 3:
    uVar10 = FUN_004ccef0(param_1);
LAB_004ceab8:
    iVar8 = FUN_00429050(&local_68);
    *(ulong *)(param_2 + iVar8) = uVar10;
    break;
  case 5:
    iVar8 = FUN_00429050(&local_68);
    FUN_004cef60(param_1,param_2 + iVar8);
    break;
  case 6:
    local_90 = 0;
    iVar8 = FUN_00429050(&local_68);
    FUN_004cf0b0(param_1,param_2 + iVar8,&local_90);
    lVar17 = local_68;
    uVar10 = FUN_00428440(local_68);
    if ((uVar10 & 0x1f) != 6) {
      lVar17 = 0;
    }
    uVar10 = FUN_00426d90(lVar17);
    if (uVar10 < 2) {
      iVar8 = FUN_00429050(&local_68);
      iVar8 = *(int *)(param_2 + iVar8);
      if (0 < param_1[0x18]) {
        lVar16 = 0;
        bVar15 = false;
        do {
          if (iVar8 == *(int *)(*(long *)(param_1 + 0x16) + lVar16 * 4)) {
            lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x2e) + 8) +
                              (long)*(int *)(*(long *)(*(long *)(param_1 + 0x2e) + 0x38) +
                                             (long)iVar8 * 0x10 + 8) * 8);
            if ((lVar18 == 0) || (uVar10 = FUN_00428370(lVar18), (uVar10 & 1) == 0)) {
              plVar19 = (long *)FUN_00426d40(lVar17,2);
              *plVar19 = lVar18;
            }
            else {
              FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
              plVar19 = (long *)FUN_00426d40(lVar17,2);
              *plVar19 = lVar18;
              FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
            }
            bVar15 = true;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < param_1[0x18]);
        if (bVar15) {
          return;
        }
      }
      uVar6 = param_1[0x26];
      if (uVar6 == (param_1[0x27] & 0x3fffffffU)) {
        FUN_00426990(PTR_DAT_048607b8,param_1 + 0x24,0x10);
        uVar6 = param_1[0x26];
      }
      param_1[0x26] = uVar6 + 1;
      plVar19 = (long *)(*(long *)(param_1 + 0x24) + (long)(int)uVar6 * 0x10);
      *plVar19 = lVar17;
      *(undefined4 *)(plVar19 + 1) = param_4;
      *(int *)((long)plVar19 + 0xc) = iVar8;
    }
    break;
  case 7:
    if (*param_1 < 2) {
      local_70 = 0;
      iVar8 = FUN_00429050(&local_68);
      FUN_004cd7f0(param_1,0,&local_70,param_2 + iVar8);
    }
    else {
      local_70 = param_3;
      iVar8 = FUN_00429050(&local_68);
      FUN_004cd7f0(param_1,3,&local_70,param_2 + iVar8);
    }
    break;
  case 8:
    uVar10 = FUN_00428440(param_3);
    if ((uVar10 & 0x1f) != 8) {
      param_3 = 0;
    }
    puVar11 = (ulong *)FUN_00426e90(param_3,1);
    if ((puVar11 == (ulong *)0x0) || (uVar10 = *puVar11 >> 8, (int)(*puVar11 >> 8) < 1)) {
      uVar10 = FUN_00426d90(param_3);
      local_90 = CONCAT71(local_90._1_7_,0xff);
      plVar19 = *(long **)(param_1 + 2);
      if (*plVar19 < plVar19[1]) {
        memcpy(&local_90,(void *)*plVar19,1);
        *plVar19 = *plVar19 + 1;
        uVar13 = (ulong)((byte)local_90 >> 1) & 0x3f;
        iVar8 = (int)uVar13;
        uVar14 = local_90;
      }
      else {
        FUN_0049e700(plVar19,&local_90,1);
        uVar13 = (ulong)((byte)local_90 >> 1) & 0x3f;
        iVar8 = (int)uVar13;
        uVar14 = local_90;
      }
      bVar15 = (char)(byte)local_90 < '\0';
      local_90 = uVar14;
      if (bVar15) {
        uVar21 = 6;
        do {
          local_90 = CONCAT71(local_90._1_7_,0xff);
          plVar19 = *(long **)(param_1 + 2);
          if (*plVar19 < plVar19[1]) {
            memcpy(&local_90,(void *)*plVar19,1);
            *plVar19 = *plVar19 + 1;
          }
          else {
            FUN_0049e700(plVar19,&local_90,1);
          }
          uVar13 = (local_90 & 0x7f) << (uVar21 & 0x3f) | uVar13;
          iVar8 = (int)uVar13;
          bVar15 = (char)(byte)local_90 < '\0';
          uVar21 = (ulong)((int)uVar21 + 7);
        } while (bVar15);
      }
      iVar7 = -iVar8;
      if ((uVar14 & 1) == 0) {
        iVar7 = iVar8;
      }
      iVar8 = FUN_00429050(&local_68);
      if (param_3 == 0) {
        uVar13 = 0;
        bVar15 = true;
      }
      else {
        uVar13 = FUN_00428370(param_3);
        if ((uVar13 & 1) == 0) {
          bVar15 = true;
        }
        else {
          FUN_0043dd30(uVar13 & 0xfffffffffffffffe);
          bVar15 = false;
        }
      }
      if (uVar10 == 0) {
        local_90._1_7_ = (undefined7)(local_90 >> 8);
        local_90 = CONCAT71(local_90._1_7_,0xff);
        plVar19 = *(long **)(param_1 + 2);
        if (*plVar19 < plVar19[1]) {
          memcpy(&local_90,(void *)*plVar19,1);
          *plVar19 = *plVar19 + 1;
          uVar10 = local_90;
        }
        else {
          FUN_0049e700(plVar19,&local_90,1);
          uVar10 = local_90;
        }
        bVar2 = (char)(byte)local_90 < '\0';
        uVar14 = (ulong)((byte)local_90 >> 1) & 0x3f;
        local_90 = uVar10;
        if (bVar2) {
          uVar21 = 6;
          do {
            local_90 = CONCAT71(local_90._1_7_,0xff);
            plVar19 = *(long **)(param_1 + 2);
            if (*plVar19 < plVar19[1]) {
              memcpy(&local_90,(void *)*plVar19,1);
              *plVar19 = *plVar19 + 1;
            }
            else {
              FUN_0049e700(plVar19,&local_90,1);
            }
            uVar14 = (local_90 & 0x7f) << (uVar21 & 0x3f) | uVar14;
            bVar2 = (char)(byte)local_90 < '\0';
            uVar21 = (ulong)((int)uVar21 + 7);
          } while (bVar2);
        }
        iVar20 = param_1[0x1e];
        lVar17 = (long)iVar20;
        lVar16 = *(long *)(param_1 + 6);
        uVar21 = -uVar14;
        if ((uVar10 & 1) == 0) {
          uVar21 = uVar14;
        }
        if (iVar20 < (int)uVar21) {
          do {
            iVar20 = iVar20 + 1;
            lVar18 = lVar17 * 8;
            lVar17 = lVar17 + 1;
            FUN_00454fe0(*(undefined8 *)(lVar16 + lVar18 + 8));
            lVar16 = *(long *)(param_1 + 6);
            param_1[0x1e] = iVar20;
          } while ((int)uVar21 != lVar17);
        }
        uVar10 = *(ulong *)(lVar16 + (-(uVar21 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar21 & 0xffffffff) << 3));
      }
      lVar16 = *(long *)(param_1 + 0x2e);
      local_90 = uVar10;
      lVar17 = FUN_0049cee0(lVar16 + 0xe8,&local_90);
      if ((lVar17 == 0) ||
         ((int)(*(uint *)(lVar17 + 4) |
               ((int)lVar17 - (int)*(undefined8 *)(lVar16 + 0xf8)) * 0x20000000) < 0)) {
        FUN_004ce360(lVar16,*(undefined4 *)(lVar16 + 0xf0),local_90);
      }
      plVar19 = *(long **)(param_1 + 0x1c);
      iVar20 = FUN_00426fc0(uVar10);
      uVar14 = (**(code **)(*plVar19 + 0x10))(plVar19,(long)(iVar20 * iVar7),0);
      iVar20 = FUN_00426fc0(uVar10);
      FUN_0043a4d0(uVar14,0,iVar20 * iVar7);
      uVar6 = *(uint *)(*(long *)(param_1 + 0x2e) + 0x40);
      *(ulong *)(param_2 + iVar8) = (ulong)uVar6;
      uVar12 = *(undefined8 *)(param_1 + 0x2e);
      local_90 = uVar14;
      uStack_88 = uVar10;
      if (uVar10 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = FUN_00428370(uVar10);
        if ((local_80 & 1) != 0) {
          FUN_0043dd30(local_80 & 0xfffffffffffffffe);
        }
      }
      local_78 = iVar7;
      FUN_004cbd30(uVar12,(ulong)uVar6,&local_90);
      if ((local_80 & 1) != 0) {
        FUN_0043dd50(local_80 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_00426fc0(uVar10);
      FUN_004cf250(param_1,uVar10,iVar7,uVar14,uVar9,param_4);
      if (!bVar15) {
        FUN_0043dd50(uVar13 & 0xfffffffffffffffe);
      }
    }
    else {
      uVar12 = FUN_00426d90(param_3);
      uVar13 = FUN_00428440();
      if ((uVar13 & 0x1f) == 5) {
        iVar8 = param_1[1];
        iVar7 = FUN_00429050(&local_68);
        __dest = (undefined8 *)(param_2 + iVar7);
        if ((char)iVar8 == '\0') {
          plVar19 = *(long **)(param_1 + 2);
          sVar4 = (uVar10 & 0x3fffffff) * 4;
          if (plVar19[1] - *plVar19 < (long)sVar4) {
            FUN_0049e700(plVar19,__dest,sVar4);
            cVar3 = (char)param_1[4];
          }
          else {
            memcpy(__dest,(void *)*plVar19,sVar4);
            *plVar19 = *plVar19 + sVar4;
            cVar3 = (char)param_1[4];
          }
          if (cVar3 != '\0') {
            puVar1 = (undefined8 *)((long)__dest + ((long)(uVar10 << 0x20) >> 0x1e));
            do {
              uVar9 = *(undefined4 *)__dest;
              *(char *)__dest = (char)((uint)uVar9 >> 0x18);
              *(char *)((long)__dest + 1) = (char)((uint)uVar9 >> 0x10);
              *(char *)((long)__dest + 2) = (char)((uint)uVar9 >> 8);
              *(char *)((long)__dest + 3) = (char)uVar9;
              __dest = (undefined8 *)((long)__dest + 4);
            } while (__dest < puVar1);
          }
        }
        else {
          plVar19 = *(long **)(param_1 + 2);
          sVar4 = (uVar10 & 0x1fffffff) * 8;
          if (plVar19[1] - *plVar19 < (long)sVar4) {
            FUN_0049e700(plVar19,__dest,sVar4);
            cVar3 = (char)param_1[4];
          }
          else {
            memcpy(__dest,(void *)*plVar19,sVar4);
            *plVar19 = *plVar19 + sVar4;
            cVar3 = (char)param_1[4];
          }
          if (cVar3 != '\0') {
            puVar1 = (undefined8 *)((long)__dest + ((long)(uVar10 << 0x20) >> 0x1d));
            do {
              uVar12 = *__dest;
              *(char *)__dest = (char)((ulong)uVar12 >> 0x38);
              *(char *)((long)__dest + 3) = (char)((ulong)uVar12 >> 0x20);
              *(char *)((long)__dest + 4) = (char)((ulong)uVar12 >> 0x18);
              *(char *)((long)__dest + 1) = (char)((ulong)uVar12 >> 0x30);
              *(char *)((long)__dest + 2) = (char)((ulong)uVar12 >> 0x28);
              *(char *)((long)__dest + 5) = (char)((ulong)uVar12 >> 0x10);
              *(char *)((long)__dest + 7) = (char)uVar12;
              *(char *)((long)__dest + 6) = (char)((ulong)uVar12 >> 8);
              __dest = __dest + 1;
            } while (__dest < puVar1);
          }
        }
      }
      else {
        iVar8 = FUN_00429050(&local_68);
        uVar9 = FUN_00426fc0(uVar12);
        FUN_004cf250(param_1,uVar12,uVar10 & 0xffffffff,param_2 + iVar8,uVar9,param_4);
      }
    }
  }
  return;
}

