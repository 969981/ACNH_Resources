
uint FUN_0368ed50(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *__src;
  long lVar15;
  undefined2 local_94;
  undefined1 local_92;
  undefined **local_90;
  undefined1 *puStack_88;
  int local_80;
  undefined1 local_7c [15];
  undefined1 local_6d;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x690) != 0) {
    return 0;
  }
  uVar10 = (ulong)param_2;
  uVar7 = 0;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x278) <= (int)param_2)) goto LAB_0368f33c;
  if ((*(int *)(param_1 + 0x688) != 1) &&
     ((*(int *)(*(long *)(*(long *)(param_1 + 0x280) + uVar10 * 8) + 0x44) != 2 &&
      (sVar6 = FUN_0376baa0(param_3), sVar6 != -1)))) {
    uVar14 = (ulong)param_2;
    if (param_2 < *(uint *)(param_1 + 0x278)) {
      lVar15 = *(long *)(*(long *)(param_1 + 0x280) + uVar14 * 8);
    }
    else {
      lVar15 = 0;
    }
    plVar11 = (long *)(lVar15 + 8);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar12 = *(long *)(lVar15 + 0x10);
    (**(code **)(*param_3 + 0x18))(param_3);
    if (lVar12 != param_3[1]) {
      uVar9 = 0;
      bVar5 = true;
      do {
        cVar4 = *(char *)(*(long *)(lVar15 + 0x10) + uVar9);
        if (cVar4 != *(char *)(param_3[1] + uVar9)) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_0368f338;
          break;
        }
        bVar5 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
      if (*(int *)(param_1 + 0x278) != 0) {
        uVar9 = 0;
        lVar15 = (long)*(int *)(param_1 + 0x278) << 3;
        do {
          if (**(short **)(*(long *)(param_1 + 0x280) + uVar9 * 8) == sVar6) {
            uVar8 = FUN_036902b4(param_1,uVar9 & 0xffffffff,uVar10,0);
            uVar7 = 0;
            if ((uVar8 & 1) != 0) {
              if (param_2 < *(uint *)(param_1 + 0x278)) {
                lVar15 = *(long *)(*(long *)(param_1 + 0x280) + uVar14 * 8);
              }
              else {
                lVar15 = 0;
              }
              FUN_0368fdb0(param_1,uVar9 & 0xffffffff,lVar15 + 8,0);
              if ((uint)uVar9 < *(uint *)(param_1 + 0x278)) {
                lVar15 = *(long *)(*(long *)(param_1 + 0x280) + uVar9 * 8);
              }
              else {
                lVar15 = 0;
              }
              FUN_0368fdb0(param_1,uVar10,lVar15 + 8,0);
              uVar7 = 1;
            }
            goto LAB_0368f33c;
          }
          uVar9 = uVar9 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      local_68 = 0;
      lVar15 = FUN_029156e0();
      uVar3 = *(undefined4 *)(lVar15 + 0x38);
      FUN_0376a300((long)&local_68 + 4,uVar3);
      FUN_0376a420(&local_68,uVar3);
      uVar13 = 0;
      if (*(short *)(param_1 + 0x698) == sVar6) {
LAB_0368f278:
        local_6d = 0;
        local_80 = 0x10;
        local_7c[0] = 0;
        local_90 = &PTR_LAB_048fb098;
        puStack_88 = local_7c;
        if (*(uint *)(param_1 + 0x278) <= param_2) {
          if ((DAT_00000048 & 1) != 0) {
            lVar15 = 0;
            goto LAB_0368f364;
          }
          lVar15 = 0;
LAB_0368f2d0:
          uVar14 = FUN_0368f440(param_1,param_3,lVar15 + 8);
          local_92 = (undefined1)(uVar14 >> 0x10);
          local_94 = (undefined2)uVar14;
          if (((uint)uVar14 & 0xff) < 0x23) {
            uVar7 = (uint)(uVar14 >> 8);
            if (((uVar7 & 0xff) <= (uint)(byte)PTR_DAT_04bc27f0[uVar14 & 0xff]) &&
               (((uint)(&DAT_053e6eb8)[uVar14 & 0xff] >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
              FUN_020fcc2c(&local_94,&local_90);
              goto LAB_0368f400;
            }
          }
          goto LAB_0368f338;
        }
        lVar15 = *(long *)(*(long *)(param_1 + 0x280) + uVar14 * 8);
        if ((*(byte *)(lVar15 + 0x48) & 1) == 0) goto LAB_0368f2d0;
LAB_0368f364:
        plVar11 = (long *)(lVar15 + 8);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        __src = *(undefined1 **)(lVar15 + 0x10);
        if (local_7c != __src) {
          (**(code **)(*(long *)(lVar15 + 8) + 0x18))(plVar11);
          lVar12 = 0;
          do {
            if (*(char *)(*(long *)(lVar15 + 0x10) + lVar12) == '\0') goto LAB_0368f3d8;
            lVar1 = *(long *)(lVar15 + 0x10) + lVar12;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_0368f3d8;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_0368f3d8;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_0368f3d8:
          iVar2 = (int)lVar12;
          if (local_80 <= (int)lVar12) {
            iVar2 = local_80 + -1;
          }
          memcpy(local_7c,__src,(long)iVar2);
          local_7c[iVar2] = 0;
        }
LAB_0368f400:
        FUN_0368fbc8(param_1,uVar13,&local_90);
      }
      else {
        if (*(short *)(param_1 + 0x770) == sVar6) {
          uVar13 = 1;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x848) == sVar6) {
          uVar13 = 2;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x920) == sVar6) {
          uVar13 = 3;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x9f8) == sVar6) {
          uVar13 = 4;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xad0) == sVar6) {
          uVar13 = 5;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xba8) == sVar6) {
          uVar13 = 6;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xc80) == sVar6) {
          uVar13 = 7;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xd58) == sVar6) {
          uVar13 = 8;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xe30) == sVar6) {
          uVar13 = 9;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xf08) == sVar6) {
          uVar13 = 10;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0xfe0) == sVar6) {
          uVar13 = 0xb;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x10b8) == sVar6) {
          uVar13 = 0xc;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1190) == sVar6) {
          uVar13 = 0xd;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1268) == sVar6) {
          uVar13 = 0xe;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1340) == sVar6) {
          uVar13 = 0xf;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1418) == sVar6) {
          uVar13 = 0x10;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x14f0) == sVar6) {
          uVar13 = 0x11;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x15c8) == sVar6) {
          uVar13 = 0x12;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x16a0) == sVar6) {
          uVar13 = 0x13;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1778) == sVar6) {
          uVar13 = 0x14;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1850) == sVar6) {
          uVar13 = 0x15;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1928) == sVar6) {
          uVar13 = 0x16;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1a00) == sVar6) {
          uVar13 = 0x17;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1ad8) == sVar6) {
          uVar13 = 0x18;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1bb0) == sVar6) {
          uVar13 = 0x19;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1c88) == sVar6) {
          uVar13 = 0x1a;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1d60) == sVar6) {
          uVar13 = 0x1b;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1e38) == sVar6) {
          uVar13 = 0x1c;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1f10) == sVar6) {
          uVar13 = 0x1d;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x1fe8) == sVar6) {
          uVar13 = 0x1e;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x20c0) == sVar6) {
          uVar13 = 0x1f;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x2198) == sVar6) {
          uVar13 = 0x20;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x2270) == sVar6) {
          uVar13 = 0x21;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x2348) == sVar6) {
          uVar13 = 0x22;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x2420) == sVar6) {
          uVar13 = 0x23;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x24f8) == sVar6) {
          uVar13 = 0x24;
          goto LAB_0368f278;
        }
        if (*(short *)(param_1 + 0x25d0) == sVar6) {
          uVar13 = 0x25;
          goto LAB_0368f278;
        }
      }
      if (DAT_05abbc58 != 0) {
        FUN_03729a60(DAT_05abbc58,param_3);
      }
      uVar7 = FUN_0368fdb0(param_1,uVar10,param_3,0);
      goto LAB_0368f33c;
    }
  }
LAB_0368f338:
  uVar7 = 0;
LAB_0368f33c:
  return uVar7 & 1;
}

