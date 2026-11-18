
void FUN_032eb5f0(int *param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  void *__dest;
  void *__src;
  ulong uVar14;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined2 *local_110;
  undefined4 local_108;
  undefined2 local_104 [96];
  undefined2 local_44;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  if ((param_2 & 1) != 0) {
    lVar13 = *(long *)PTR_DAT_04bb4fb0;
    uVar6 = FUN_03368ef0(DAT_05734ea0,0);
    lVar9 = *(long *)(lVar13 + 8);
    if (lVar9 != 0) {
      lVar10 = 0;
      if (*(char *)(lVar9 + 0x38) != '\0') {
        lVar10 = lVar9 + 8;
      }
      FUN_03366350(lVar13,lVar10,PTR_s_Decide_Erase_04bc9780,1,uVar6,1);
    }
  }
  if (param_1[0x191] < param_1[0x192]) {
    uVar3 = param_1[0x192] - 1;
    param_1[0x192] = uVar3;
    piVar2 = (int *)((long)(param_1 + 0x18e) + (ulong)uVar3 * 2);
    if (4 < uVar3) {
      piVar2 = param_1 + 0x18e;
    }
    *(undefined2 *)piVar2 = 0;
    FUN_032ea1b0(param_1,4);
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ebab4;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar9 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar9 * 2) == 0) goto LAB_032eba8c;
      lVar13 = *(long *)(param_1 + 0x1a8) + lVar9 * 2;
      if (*(short *)(lVar13 + 2) == 0) goto LAB_032eba80;
      if (*(short *)(lVar13 + 4) == 0) goto LAB_032eba88;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  else {
    iVar5 = nn::kpr::KeyCodeComposer::GetCompositionCount();
    lVar9 = DAT_05355a60;
    if (iVar5 < 1) {
      iVar5 = param_1[0x11d];
      if (iVar5 < 1) {
        iVar5 = *param_1;
        if (iVar5 == 0) {
          return;
        }
        plVar7 = *(long **)(param_1 + 8);
        lVar9 = (long)iVar5 + -1;
        iVar11 = (int)lVar9;
        *param_1 = iVar11;
        iVar12 = *(int *)((long)plVar7 + 0xc);
        if (iVar12 != 0) {
          iVar4 = iVar12 - iVar11;
          if (iVar5 <= iVar12) {
            iVar4 = 1;
          }
          iVar11 = iVar4 + iVar11;
          uVar3 = iVar12 - iVar11;
          if (0 < (int)uVar3) {
            if (uVar3 == 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              lVar13 = (long)iVar11 * 2;
              do {
                lVar10 = uVar14 * 2;
                uVar14 = uVar14 + 2;
                *(undefined2 *)(*plVar7 + lVar9 * 2 + lVar10) =
                     *(undefined2 *)(*plVar7 + lVar13 + lVar10);
                *(undefined2 *)(*plVar7 + lVar9 * 2 + lVar10 + 2) =
                     *(undefined2 *)(*plVar7 + lVar13 + lVar10 + 2);
              } while (((ulong)uVar3 & 0xfffffffe) != uVar14);
            }
            if ((uVar3 & 1) != 0) {
              *(undefined2 *)(*plVar7 + (uVar14 + lVar9) * 2) =
                   *(undefined2 *)(*plVar7 + (uVar14 + (long)iVar11) * 2);
            }
            iVar12 = *(int *)((long)plVar7 + 0xc);
          }
          *(int *)((long)plVar7 + 0xc) = iVar12 - iVar4;
          *(undefined2 *)(*plVar7 + (long)(iVar12 - iVar4) * 2) = 0;
          plVar7 = *(long **)(param_1 + 8);
        }
        param_1[2] = -1;
        FUN_03363ed0(param_1 + 0x114,*plVar7);
        __dest = *(void **)(param_1 + 0x1de);
        (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
        __src = *(void **)(param_1 + 0x1a8);
        if (__dest == __src) goto LAB_032ebab4;
        (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
        lVar9 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar9 * 2) == 0) goto LAB_032eba8c;
          lVar13 = *(long *)(param_1 + 0x1a8) + lVar9 * 2;
          if (*(short *)(lVar13 + 2) == 0) goto LAB_032eba80;
          if (*(short *)(lVar13 + 4) == 0) goto LAB_032eba88;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
      }
      else {
        if (((*(int *)(*(long *)(DAT_05355a60 + 0x20) + 0x1050) - 7U < 3) &&
            (lVar13 = *(long *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e0), lVar13 != 0)) &&
           (plVar7 = *(long **)(lVar13 + 8), plVar7 != (long *)0x0)) {
          uVar14 = (**(code **)(*plVar7 + 0xe8))();
          if ((uVar14 & 1) == 0) {
            iVar5 = param_1[0x11d];
            if (0 < iVar5) goto LAB_032eb8cc;
          }
          else {
            (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
            lVar10 = *(long *)(param_1 + 0x1a8);
            lVar13 = 0;
            do {
              if (*(short *)(lVar10 + lVar13 * 2) == 0) goto LAB_032ebb1c;
              lVar1 = lVar10 + lVar13 * 2;
              if (*(short *)(lVar1 + 2) == 0) {
                lVar13 = lVar13 + 1;
                goto LAB_032ebb1c;
              }
              if (*(short *)(lVar1 + 4) == 0) {
                lVar13 = lVar13 + 2;
                goto LAB_032ebb1c;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_032ebb1c:
            iVar11 = (int)lVar13;
            iVar5 = iVar11;
            if (0 < iVar11) {
              iVar5 = 1;
            }
            *(undefined2 *)(lVar10 + (long)(iVar11 - iVar5) * 2) = 0;
            local_44 = 0;
            local_108 = 0x61;
            local_110 = local_104;
            local_104[0] = 0;
            local_118 = PTR_DAT_04bc9690 + 0x10;
            (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
            lVar9 = *(long *)(lVar9 + 0x20);
            uStack_120 = *(undefined8 *)(param_1 + 0x1a8);
            local_128 = &PTR_LAB_04952fa8;
            if (*(long *)(lVar9 + 0x1ae0) != 0) {
              FUN_032e28a0(*(long *)(lVar9 + 0x1ae0),lVar9 + 0x1a70);
            }
            *(undefined1 *)(lVar9 + 0x1aa8) = 1;
            if (*(int *)(lVar9 + 0x1aa4) - 1U < 2) {
              lVar13 = *(long *)PTR_DAT_04bb29d0;
              do {
                nn::os::ConvertToTimeSpan(lVar13 / 1000);
                nn::os::SleepThread();
              } while (*(int *)(lVar9 + 0x1aa4) - 1U < 2);
            }
            FUN_032ee0b0(lVar9 + 0x1800,&local_128,&local_118);
            (**(code **)(local_118 + 0x18))(&local_118);
            FUN_03363ed0(param_1 + 0x11a,local_110);
          }
        }
        else {
LAB_032eb8cc:
          param_1[0x11d] = iVar5 - 1U;
          *(undefined2 *)(*(long *)(param_1 + 0x11a) + (ulong)(iVar5 - 1U) * 2) = 0;
        }
        FUN_032ea1b0(param_1,4);
        FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
        __dest = *(void **)(param_1 + 0x1de);
        (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
        __src = *(void **)(param_1 + 0x1a8);
        if (__dest == __src) goto LAB_032ebab4;
        (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
        lVar9 = 0;
        do {
          if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar9 * 2) == 0) goto LAB_032eba8c;
          lVar13 = *(long *)(param_1 + 0x1a8) + lVar9 * 2;
          if (*(short *)(lVar13 + 2) == 0) goto LAB_032eba80;
          if (*(short *)(lVar13 + 4) == 0) goto LAB_032eba88;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
      }
    }
    else {
      nn::kpr::KeyCodeComposer::Remove((ushort *)(param_1 + 0x19c),(int)&local_118);
      FUN_032ea1b0(param_1,4);
      FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
      __dest = *(void **)(param_1 + 0x1de);
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      __src = *(void **)(param_1 + 0x1a8);
      if (__dest == __src) goto LAB_032ebab4;
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar9 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar9 * 2) == 0) goto LAB_032eba8c;
        lVar13 = *(long *)(param_1 + 0x1a8) + lVar9 * 2;
        if (*(short *)(lVar13 + 2) == 0) goto LAB_032eba80;
        if (*(short *)(lVar13 + 4) == 0) goto LAB_032eba88;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
    }
  }
  lVar9 = 0;
LAB_032eba8c:
  uVar3 = (uint)lVar9;
  if (param_1[0x1e0] <= (int)(uint)lVar9) {
    uVar3 = param_1[0x1e0] - 1;
  }
  uVar14 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
  memcpy(__dest,__src,uVar14);
  *(undefined2 *)((long)__dest + uVar14) = 0;
LAB_032ebab4:
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  param_1[0x186] = param_1[0x184];
  local_118 = (undefined *)CONCAT44(*param_1,*param_1);
  puVar8 = *(undefined8 **)(param_1 + 4);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,&local_118);
  }
  return;
LAB_032eba80:
  lVar9 = lVar9 + 1;
  goto LAB_032eba8c;
LAB_032eba88:
  lVar9 = lVar9 + 2;
  goto LAB_032eba8c;
}

