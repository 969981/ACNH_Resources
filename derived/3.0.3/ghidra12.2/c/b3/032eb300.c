
void FUN_032eb300(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  ushort *puVar12;
  ushort uVar13;
  void *__dest;
  long lVar14;
  void *__src;
  ushort local_3c [2];
  int local_38;
  int iStack_34;
  
  puVar5 = PTR_DAT_04bc1118;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  lVar14 = *(long *)puVar5;
  iVar2 = *param_1;
  iVar6 = param_1[2];
  if (iVar2 <= param_1[2]) {
    iVar6 = iVar2;
  }
  if (iVar6 != -1) {
    iVar2 = iVar6;
  }
  param_1[3] = iVar2;
  FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
  if (param_1[0x183] != param_1[0x184]) {
    FUN_032e81e0(param_1);
  }
  if (*(int *)(*(long *)(lVar14 + 0x20) + 0x1050) != 1 &&
      *(char *)(*(long *)(lVar14 + 0x20) + 0x140c) != '\0') {
    lVar10 = *(long *)(lVar14 + 0xbf8);
    if (lVar10 == 0) {
      if ((*(long *)(lVar14 + 0x30) == 0) ||
         ((*(uint *)(*(long *)(lVar14 + 0x30) + 0x1368) & 0xfffffffd) != 0)) goto LAB_032eb3f8;
    }
    else {
      uVar3 = *(uint *)(lVar10 + 0x20f4);
      if (uVar3 == 1) {
        piVar11 = (int *)(lVar10 + 0x2530);
        iVar6 = 6;
      }
      else {
        piVar11 = (int *)(lVar10 + 0x2060);
        if (2 < uVar3) {
          uVar3 = 0;
        }
        iVar6 = (&DAT_0418db90)[(int)uVar3] + -1;
      }
      if (*piVar11 != iVar6) {
LAB_032eb3f8:
        iVar6 = 0;
        uVar13 = 10;
        local_3c[0] = 10;
        local_3c[1] = 0;
        puVar12 = local_3c;
        do {
          if (uVar13 == 0xe) {
            uVar4 = puVar12[3] >> 1;
            puVar12 = puVar12 + 3 + uVar4;
            iVar6 = iVar6 + (uint)uVar4 + 3;
          }
          else if (uVar13 == 0) goto code_r0x032eb44c;
          iVar2 = iVar6 + 2;
          if (uVar13 != 0xf) {
            iVar2 = iVar6;
          }
          iVar6 = iVar2 + 1;
          puVar12 = puVar12 + (ulong)(uVar13 == 0xf) * 2 + 1;
          uVar13 = *puVar12;
        } while( true );
      }
    }
  }
LAB_032eb470:
  uVar7 = FUN_032e84e0(param_1);
  if ((uVar7 & 1) != 0) {
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar14 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar14 * 2) == 0) goto LAB_032eb50c;
        lVar10 = *(long *)(param_1 + 0x1a8) + lVar14 * 2;
        if (*(short *)(lVar10 + 2) == 0) {
          lVar14 = lVar14 + 1;
          goto LAB_032eb50c;
        }
        if (*(short *)(lVar10 + 4) == 0) {
          lVar14 = lVar14 + 2;
          goto LAB_032eb50c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_032eb50c:
      uVar3 = (uint)lVar14;
      if (param_1[0x1e0] <= (int)(uint)lVar14) {
        uVar3 = param_1[0x1e0] - 1;
      }
      uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
      memcpy(__dest,__src,uVar7);
      *(undefined2 *)((long)__dest + uVar7) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    local_38 = param_1[3];
    iStack_34 = *param_1;
    puVar8 = *(undefined8 **)(param_1 + 4);
    param_1[0x186] = param_1[0x184];
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,&local_38);
    }
    lVar10 = *(long *)PTR_DAT_04bb4fb0;
    uVar9 = FUN_03368ef0(DAT_05734ea0,0);
    lVar14 = *(long *)(lVar10 + 8);
    if (lVar14 != 0) {
      lVar1 = 0;
      if (*(char *)(lVar14 + 0x38) != '\0') {
        lVar1 = lVar14 + 8;
      }
      FUN_03366350(lVar10,lVar1,s_Decide_LineBreak_04b20714,1,uVar9,0);
    }
  }
  return;
code_r0x032eb44c:
  iVar6 = FUN_03363a30(*(undefined8 *)(param_1 + 8),*param_1,local_3c,iVar6);
  *param_1 = *param_1 + iVar6;
  param_1[2] = -1;
  goto LAB_032eb470;
}

