
void FUN_032eade0(int *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  ushort *puVar13;
  ushort uVar14;
  void *__dest;
  void *__src;
  long lVar15;
  int local_38;
  int iStack_34;
  
  puVar3 = PTR_DAT_04bc1118;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  lVar15 = *(long *)puVar3;
  lVar7 = *(long *)(lVar15 + 0x20);
  if (*(int *)(lVar7 + 0x1050) == 1 || *(char *)(lVar7 + 0x140c) == '\0') {
LAB_032eae98:
    if (((((*(long *)(lVar7 + 0x6e0) == 0) ||
          (lVar7 = *(long *)(*(long *)(lVar7 + 0x6e0) + 8), lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 800), lVar7 == 0)) || (*(char *)(lVar7 + 2000) != '\0')) &&
       (param_1[0x183] == param_1[0x184])) {
      if ((param_3 & 1) != 0) {
        return;
      }
      if ((param_4 & 1) == 0) {
        FUN_03301ea0();
        return;
      }
      return;
    }
  }
  else {
    lVar11 = *(long *)(lVar15 + 0xbf8);
    if (lVar11 == 0) {
      if ((*(long *)(lVar15 + 0x30) != 0) &&
         ((*(uint *)(*(long *)(lVar15 + 0x30) + 0x1368) & 0xfffffffd) == 0)) goto LAB_032eae98;
    }
    else {
      uVar1 = *(uint *)(lVar11 + 0x20f4);
      if (uVar1 == 1) {
        piVar12 = (int *)(lVar11 + 0x2530);
        iVar6 = 6;
      }
      else {
        piVar12 = (int *)(lVar11 + 0x2060);
        if (2 < uVar1) {
          uVar1 = 0;
        }
        iVar6 = (&DAT_0418db90)[(int)uVar1] + -1;
      }
      if (*piVar12 == iVar6) goto LAB_032eae98;
    }
  }
  iVar5 = *param_1;
  iVar6 = param_1[2];
  if (iVar5 <= param_1[2]) {
    iVar6 = iVar5;
  }
  if (iVar6 != -1) {
    iVar5 = iVar6;
  }
  param_1[3] = iVar5;
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  if (param_1[6] == 3) {
    FUN_032ea740(param_1);
  }
  if (param_1[0x183] == param_1[0x184]) {
    if (*(int *)(*(long *)(lVar15 + 0x20) + 0x1050) != 1 &&
        *(char *)(*(long *)(lVar15 + 0x20) + 0x140c) != '\0') {
      lVar7 = *(long *)(lVar15 + 0xbf8);
      if (lVar7 == 0) {
        if ((*(long *)(lVar15 + 0x30) == 0) ||
           ((*(uint *)(*(long *)(lVar15 + 0x30) + 0x1368) & 0xfffffffd) != 0)) goto LAB_032eb05c;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0x20f4);
        if (uVar1 == 1) {
          piVar12 = (int *)(lVar7 + 0x2530);
          iVar6 = 6;
        }
        else {
          piVar12 = (int *)(lVar7 + 0x2060);
          if (2 < uVar1) {
            uVar1 = 0;
          }
          iVar6 = (&DAT_0418db90)[(int)uVar1] + -1;
        }
        if (*piVar12 != iVar6) {
LAB_032eb05c:
          iVar6 = 0;
          uVar14 = 10;
          puVar13 = (ushort *)&local_38;
          do {
            if (uVar14 == 0xe) {
              uVar2 = puVar13[3] >> 1;
              puVar13 = puVar13 + 3 + uVar2;
              iVar6 = iVar6 + (uint)uVar2 + 3;
            }
            else if (uVar14 == 0) goto LAB_032eb14c;
            iVar5 = iVar6 + 2;
            if (uVar14 != 0xf) {
              iVar5 = iVar6;
            }
            iVar6 = iVar5 + 1;
            puVar13 = puVar13 + (ulong)(uVar14 == 0xf) * 2 + 1;
            uVar14 = *puVar13;
          } while( true );
        }
      }
    }
    goto LAB_032eb170;
  }
  iVar6 = param_1[0x18d];
  iVar5 = nn::kpr::KeyCodeComposer::GetCompositionCount();
  if ((0 < param_1[0x11d]) &&
     (lVar7 = *(long *)(*(long *)puVar3 + 0x20), *(char *)(lVar7 + 0x1a5d) != '\0')) {
    FUN_032ede60(lVar7 + 0x1800,*(undefined8 *)(param_1 + 0x11a));
  }
  FUN_032e81e0(param_1);
  if (((iVar6 != 3) || ((param_2 & 1) == 0)) ||
     ((*(int *)(*(long *)(lVar15 + 0x20) + 0x1050) == 1 ||
      (*(char *)(*(long *)(lVar15 + 0x20) + 0x140c) == '\0')))) goto LAB_032eb170;
  lVar7 = *(long *)(lVar15 + 0xbf8);
  if (lVar7 == 0) {
    if (*(long *)(lVar15 + 0x30) != 0) {
      bVar4 = (*(uint *)(*(long *)(lVar15 + 0x30) + 0x1368) & 0xfffffffd) == 0;
      goto LAB_032eb0ec;
    }
    bVar4 = true;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0x20f4);
    if (uVar1 == 1) {
      piVar12 = (int *)(lVar7 + 0x2530);
      iVar6 = 6;
    }
    else {
      piVar12 = (int *)(lVar7 + 0x2060);
      if (2 < uVar1) {
        uVar1 = 0;
      }
      iVar6 = (&DAT_0418db90)[(int)uVar1] + -1;
    }
    bVar4 = *piVar12 == iVar6;
LAB_032eb0ec:
    bVar4 = !bVar4;
  }
  if ((0 < iVar5) && (bVar4)) {
    iVar6 = 0;
    uVar14 = 10;
    puVar13 = (ushort *)&local_38;
    do {
      if (uVar14 == 0xe) {
        uVar2 = puVar13[3] >> 1;
        puVar13 = puVar13 + 3 + uVar2;
        iVar6 = iVar6 + (uint)uVar2 + 3;
      }
      else if (uVar14 == 0) goto LAB_032eb14c;
      iVar5 = iVar6 + 2;
      if (uVar14 != 0xf) {
        iVar5 = iVar6;
      }
      iVar6 = iVar5 + 1;
      puVar13 = puVar13 + (ulong)(uVar14 == 0xf) * 2 + 1;
      uVar14 = *puVar13;
    } while( true );
  }
LAB_032eb170:
  uVar8 = FUN_032e84e0(param_1);
  if ((uVar8 & 1) != 0) {
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar7 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032eb20c;
        lVar15 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
        if (*(short *)(lVar15 + 2) == 0) {
          lVar7 = lVar7 + 1;
          goto LAB_032eb20c;
        }
        if (*(short *)(lVar15 + 4) == 0) {
          lVar7 = lVar7 + 2;
          goto LAB_032eb20c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_032eb20c:
      uVar1 = (uint)lVar7;
      if (param_1[0x1e0] <= (int)(uint)lVar7) {
        uVar1 = param_1[0x1e0] - 1;
      }
      uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(__dest,__src,uVar8);
      *(undefined2 *)((long)__dest + uVar8) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    local_38 = param_1[3];
    iStack_34 = *param_1;
    puVar9 = *(undefined8 **)(param_1 + 4);
    param_1[0x186] = param_1[0x184];
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,&local_38);
    }
    lVar15 = *(long *)PTR_DAT_04bb4fb0;
    uVar10 = FUN_03368ef0(DAT_05734ea0,0);
    lVar7 = *(long *)(lVar15 + 8);
    if (lVar7 != 0) {
      lVar11 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar11 = lVar7 + 8;
      }
      FUN_03366350(lVar15,lVar11,s_Decide_Enter_04b20726,1,uVar10,0);
    }
  }
  return;
LAB_032eb14c:
  local_38 = 10;
  iVar6 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,&local_38,iVar6);
  *param_1 = *param_1 + iVar6;
  param_1[2] = -1;
  goto LAB_032eb170;
}

