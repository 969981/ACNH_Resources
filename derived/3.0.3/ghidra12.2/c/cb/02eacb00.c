
void FUN_02eacb00(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x54) = *param_2;
  *(undefined1 *)(param_1 + 0x1068) = *(undefined1 *)((long)param_2 + 0x1c9);
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0:
    *(undefined4 *)(param_1 + 0x58) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead06c;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead06c;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead06c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead06c:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x80) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x80) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    bVar4 = *(byte *)(param_2 + 0x70);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x5c) = bVar4;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x218) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead0b8;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead0b8;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead0b8;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead0b8:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x248) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x248) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x74);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x950) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x978);
    *(undefined8 *)(param_1 + 0x960) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x968) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead0f8;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead0f8;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead0f8;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead0f8:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x980) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x980) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined8 *)(param_1 + 0x958) = *(undefined8 *)(param_2 + 0x7e);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xb18) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0xb38);
    *(undefined8 *)(param_1 + 0xb20) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xb28) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead138;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead138;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead138;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead138:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0xb40) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0xb40) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined4 *)(param_1 + 0xb1c) = param_2[0x80];
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x3e0) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x408);
    *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead178;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead178;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead178;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead178:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x410) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x410) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_2 + 0x76);
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x5a8) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x5d8);
    *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead1b8;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead1b8;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead1b8;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead1b8:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x5e0) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x5e0) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x7a);
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x778) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0x7b0);
    *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
      lVar3 = 0;
      do {
        if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead200;
        lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar3 = lVar3 + 1;
          goto LAB_02ead200;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar3 = lVar3 + 2;
          goto LAB_02ead200;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_02ead200:
      uVar2 = (uint)lVar3;
      if (*(int *)(param_1 + 0x7b8) <= (int)(uint)lVar3) {
        uVar2 = *(int *)(param_1 + 0x7b8) - 1;
      }
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(pvVar7,pvVar8,uVar6);
      *(undefined2 *)((long)pvVar7 + uVar6) = 0;
    }
    *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)((long)param_2 + 0x1c1);
    break;
  case 8:
    *(undefined4 *)(param_1 + 0xcd8) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0xcf8);
    *(undefined8 *)(param_1 + 0xce0) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 == pvVar8) {
      return;
    }
    (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) {
LAB_02ead258:
        uVar2 = (uint)lVar3;
        iVar5 = *(int *)(param_1 + 0xd00);
        goto LAB_02ead270;
      }
      lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        iVar5 = *(int *)(param_1 + 0xd00);
        uVar2 = (int)lVar3 + 1;
        goto LAB_02ead270;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_02ead258;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    iVar5 = *(int *)(param_1 + 0xd00);
    uVar2 = 0;
    goto LAB_02ead270;
  case 9:
    *(undefined4 *)(param_1 + 0xe98) = param_2[1];
    pvVar7 = *(void **)(param_1 + 0xeb8);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xea8) = *(undefined8 *)(param_2 + 4);
    plVar9 = (long *)(param_2 + 6);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 8);
    if (pvVar7 == pvVar8) {
      return;
    }
    (**(code **)(*(long *)(param_2 + 6) + 0x18))(plVar9);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_2 + 8) + lVar3 * 2) == 0) goto LAB_02ead26c;
      lVar1 = *(long *)(param_2 + 8) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_02ead26c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_02ead26c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02ead26c:
    uVar2 = (uint)lVar3;
    iVar5 = *(int *)(param_1 + 0xec0);
LAB_02ead270:
    if (iVar5 <= (int)uVar2) {
      uVar2 = iVar5 - 1;
    }
    uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(pvVar7,pvVar8,uVar6);
    *(undefined2 *)((long)pvVar7 + uVar6) = 0;
  }
  return;
}

