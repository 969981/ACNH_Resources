
void FUN_0311e2c0(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined **local_80;
  undefined4 local_78;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x1068) != 0) {
      iVar9 = 0;
      lVar4 = param_1 + 0x250;
      ppuVar1 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
      do {
        plVar5 = *(long **)(lVar4 + (long)iVar9 * 0x1f8 + 8);
        if (*(long *)(param_1 + 0x1068) == 0) {
          if (plVar5 != (long *)0x0) {
            lVar3 = lVar4 + (long)iVar9 * 0x1f8 + 0x1d8;
            local_80 = ppuVar1;
            goto LAB_0311e320;
          }
        }
        else if (plVar5 != (long *)0x0) {
          lVar3 = *(long *)(param_1 + 0x1068) + 0x1bf38;
          local_80 = &PTR_LAB_04a3ee98;
LAB_0311e320:
          local_78 = 0x1f;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
          (**(code **)(plVar5[3] + 0x208))(plVar5[1],0,0,lVar3);
        }
        lVar3 = lVar4 + (long)iVar9 * 0x1f8;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(lVar3 + 0x68) = 0xffffffff;
        **(undefined1 **)(lVar3 + 0x18) = 0;
      } while (iVar9 != 7);
      pvVar6 = *(void **)(param_1 + 0x268);
      (**(code **)(*(long *)(param_2 + 0x260) + 0x18))(param_2 + 0x260);
      pvVar7 = *(void **)(param_2 + 0x268);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0x260) + 0x18))(param_2 + 0x260);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0x268) + lVar4) == '\0') goto LAB_0311e44c;
          lVar3 = *(long *)(param_2 + 0x268) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e44c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e44c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e44c:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0x270) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0x270) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0x460);
      (**(code **)(*(long *)(param_2 + 0x458) + 0x18))(param_2 + 0x458);
      pvVar7 = *(void **)(param_2 + 0x460);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0x458) + 0x18))(param_2 + 0x458);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0x460) + lVar4) == '\0') goto LAB_0311e4ec;
          lVar3 = *(long *)(param_2 + 0x460) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e4ec;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e4ec;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e4ec:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0x468) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0x468) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0x658);
      (**(code **)(*(long *)(param_2 + 0x650) + 0x18))(param_2 + 0x650);
      pvVar7 = *(void **)(param_2 + 0x658);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0x650) + 0x18))(param_2 + 0x650);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0x658) + lVar4) == '\0') goto LAB_0311e58c;
          lVar3 = *(long *)(param_2 + 0x658) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e58c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e58c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e58c:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0x660) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0x660) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0x850);
      (**(code **)(*(long *)(param_2 + 0x848) + 0x18))(param_2 + 0x848);
      pvVar7 = *(void **)(param_2 + 0x850);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0x848) + 0x18))(param_2 + 0x848);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0x850) + lVar4) == '\0') goto LAB_0311e62c;
          lVar3 = *(long *)(param_2 + 0x850) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e62c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e62c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e62c:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0x858) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0x858) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0xa48);
      (**(code **)(*(long *)(param_2 + 0xa40) + 0x18))(param_2 + 0xa40);
      pvVar7 = *(void **)(param_2 + 0xa48);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0xa40) + 0x18))(param_2 + 0xa40);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0xa48) + lVar4) == '\0') goto LAB_0311e6cc;
          lVar3 = *(long *)(param_2 + 0xa48) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e6cc;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e6cc;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e6cc:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0xa50) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0xa50) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0xc40);
      (**(code **)(*(long *)(param_2 + 0xc38) + 0x18))(param_2 + 0xc38);
      pvVar7 = *(void **)(param_2 + 0xc40);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0xc38) + 0x18))(param_2 + 0xc38);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0xc40) + lVar4) == '\0') goto LAB_0311e76c;
          lVar3 = *(long *)(param_2 + 0xc40) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e76c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e76c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e76c:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0xc48) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0xc48) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      pvVar6 = *(void **)(param_1 + 0xe38);
      (**(code **)(*(long *)(param_2 + 0xe30) + 0x18))(param_2 + 0xe30);
      pvVar7 = *(void **)(param_2 + 0xe38);
      if (pvVar6 != pvVar7) {
        (**(code **)(*(long *)(param_2 + 0xe30) + 0x18))(param_2 + 0xe30);
        lVar4 = 0;
        do {
          if (*(char *)(*(long *)(param_2 + 0xe38) + lVar4) == '\0') goto LAB_0311e80c;
          lVar3 = *(long *)(param_2 + 0xe38) + lVar4;
          if (*(char *)(lVar3 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0311e80c;
          }
          if (*(char *)(lVar3 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0311e80c;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0311e80c:
        iVar9 = (int)lVar4;
        if (*(int *)(param_1 + 0xe40) <= (int)lVar4) {
          iVar9 = *(int *)(param_1 + 0xe40) + -1;
        }
        memcpy(pvVar6,pvVar7,(long)iVar9);
        *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
      }
      plVar5 = *(long **)(param_1 + 0x1018);
      if ((plVar5 != (long *)0x0) && (plVar8 = *(long **)(param_2 + 0x1018), plVar8 != (long *)0x0))
      {
        ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_78 = 7;
        local_80 = ppuVar1;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
        uVar10 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
        local_78 = 0x14;
        local_80 = ppuVar1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
        (**(code **)(plVar5[3] + 0x158))(uVar10,plVar5[1]);
      }
      plVar5 = *(long **)(param_1 + 0x1020);
      if ((plVar5 != (long *)0x0) && (plVar8 = *(long **)(param_2 + 0x1020), plVar8 != (long *)0x0))
      {
        ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_78 = 7;
        local_80 = ppuVar1;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
        uVar10 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
        local_78 = 0x14;
        local_80 = ppuVar1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
        (**(code **)(plVar5[3] + 0x158))(uVar10,plVar5[1]);
      }
      plVar5 = *(long **)(param_1 + 0x1028);
      if ((plVar5 != (long *)0x0) && (plVar8 = *(long **)(param_2 + 0x1028), plVar8 != (long *)0x0))
      {
        ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_78 = 7;
        local_80 = ppuVar1;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
        uVar10 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
        local_78 = 0x14;
        local_80 = ppuVar1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
        (**(code **)(plVar5[3] + 0x158))(uVar10,plVar5[1]);
      }
      plVar5 = *(long **)(param_1 + 0x1030);
      if ((plVar5 != (long *)0x0) && (plVar8 = *(long **)(param_2 + 0x1030), plVar8 != (long *)0x0))
      {
        ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_78 = 7;
        local_80 = ppuVar1;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_80);
        uVar10 = (**(code **)(plVar8[3] + 0x90))(plVar8[1]);
        local_78 = 0x14;
        local_80 = ppuVar1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
        (**(code **)(plVar5[3] + 0x158))(uVar10,plVar5[1]);
      }
      *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
      *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
      *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
      *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_2 + 0x8a0);
      *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_2 + 0xa98);
      *(undefined4 *)(param_1 + 0xc90) = *(undefined4 *)(param_2 + 0xc90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_2 + 0xe88);
      uVar2 = FUN_0311daa0(param_1);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_0311dcb8(param_1), (uVar2 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x1078) = 0;
        FUN_03464520(*(undefined8 *)(param_1 + 0x1070),0);
      }
      else {
        *(undefined1 *)(param_1 + 0x1078) = 1;
        FUN_03464670(*(undefined8 *)(param_1 + 0x1070),0);
      }
    }
  }
  return;
}

