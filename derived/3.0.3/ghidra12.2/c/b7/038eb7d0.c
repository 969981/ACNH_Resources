
undefined8 FUN_038eb7d0(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [149];
  undefined1 local_8f;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  
  *(undefined ***)(param_2 + 8) = &PTR_PTR_04c4b9a0;
  if ((param_5 == 0) && (param_5 = *(long *)(param_1 + 8), param_5 == 0)) {
    uVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40) + -5;
    if ((param_4 & 1) == 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";
      local_78 = puVar1;
      (**(code **)(PTR_PTR_04c4b9a0 + 0xb0))
                (&PTR_PTR_04c4b9a0,*(undefined8 *)(param_2 + 0x10),&local_78,0x27);
      if (0 < iVar3) {
        pcStack_80 = "<!DOCTYPE doc[\n";
        local_88 = puVar1;
        (**(code **)(**(long **)(param_2 + 8) + 0xb0))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_88,0xf);
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 8
                                                       ) + 8) + 8) + 8);
        if (lVar8 != param_1 + 0x30) {
          lVar5 = lVar8 + -0xb8;
          do {
            local_128 = 0x96;
            local_8f = 0;
            local_124[0] = 0;
            local_138 = &DAT_04b65950;
            local_130 = local_124;
            (**(code **)(*(long *)(lVar8 + -0xb8) + 0x18))(lVar5);
            uVar4 = *(undefined8 *)(lVar5 + 8);
            (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
            FUN_038d1270(&local_138,"<!ENTITY %s \"%s\">\n",uVar4,*(undefined8 *)(lVar5 + 0x28));
            (**(code **)(local_138 + 0x18))(&local_138);
            lVar5 = 0;
            do {
              if (local_130[lVar5] == '\0') goto LAB_038eba88;
              if (local_130[lVar5 + 1] == '\0') {
                lVar5 = lVar5 + 1;
                goto LAB_038eba88;
              }
              if (local_130[lVar5 + 2] == '\0') {
                lVar5 = lVar5 + 2;
                goto LAB_038eba88;
              }
              lVar5 = lVar5 + 3;
            } while (lVar5 != 0x80001);
            lVar5 = 0;
LAB_038eba88:
            (**(code **)(**(long **)(param_2 + 8) + 0xb0))
                      (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_138,lVar5);
            lVar8 = *(long *)(lVar8 + 8);
            lVar5 = lVar8 + -0xb8;
          } while (lVar5 != param_1 + -0x88);
        }
        local_138 = PTR_DAT_04bb2020 + 0x10;
        local_130 = &DAT_0405efbd;
        (**(code **)(**(long **)(param_2 + 8) + 0xb0))
                  (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_138,3);
      }
      FUN_038ebfb0(param_2,param_5,0,*(undefined4 *)(param_1 + 0x28),param_3);
    }
    else {
      local_138 = (undefined *)CONCAT71(local_138._1_7_,(char)iVar3);
      (**(code **)(PTR_PTR_04c4b9a0 + 0xb8))
                (&PTR_PTR_04c4b9a0,*(undefined8 *)(param_2 + 0x10),&local_138,1);
      if ((0 < iVar3) &&
         (lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) +
                                                         8) + 8) + 8) + 8), lVar8 != param_1 + 0x30)
         ) {
        plVar6 = (long *)(lVar8 + -0xb8);
        do {
          local_78 = (undefined *)((ulong)local_78 & 0xffffffffffffff00);
          (**(code **)(*(long *)(lVar8 + -0xb8) + 0x18))(plVar6);
          lVar5 = 0;
          do {
            if (*(char *)(plVar6[1] + lVar5) == '\0') goto LAB_038eb934;
            lVar2 = plVar6[1] + lVar5;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_038eb934;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar5 = lVar5 + 2;
              goto LAB_038eb934;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_038eb934:
          local_78._0_1_ = (char)lVar5;
          (**(code **)(**(long **)(param_2 + 8) + 0xb8))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_78,1);
          (**(code **)(*plVar6 + 0x18))(plVar6);
          (**(code **)(**(long **)(param_2 + 8) + 0xb8))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),plVar6[1],
                     local_78._0_1_);
          plVar7 = plVar6 + 4;
          (**(code **)(*plVar7 + 0x18))(plVar7);
          lVar5 = 0;
          do {
            if (*(char *)(plVar6[5] + lVar5) == '\0') goto LAB_038eb884;
            lVar2 = plVar6[5] + lVar5;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_038eb884;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar5 = lVar5 + 2;
              goto LAB_038eb884;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          lVar5 = 0;
LAB_038eb884:
          local_78 = (undefined *)CONCAT71(local_78._1_7_,(char)lVar5);
          (**(code **)(**(long **)(param_2 + 8) + 0xb8))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_78,1);
          (**(code **)(plVar6[4] + 0x18))(plVar7);
          (**(code **)(**(long **)(param_2 + 8) + 0xb8))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),plVar6[5],
                     (ulong)local_78 & 0xff);
          lVar8 = *(long *)(lVar8 + 8);
          plVar6 = (long *)(lVar8 + -0xb8);
        } while (plVar6 != (long *)(param_1 + -0x88));
      }
      FUN_038ebc00(param_2,param_5);
    }
    (**(code **)(**(long **)(param_2 + 8) + 0xd8))
              (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    (**(code **)(**(long **)(param_2 + 0x10) + 0x28))();
    uVar4 = 1;
  }
  return uVar4;
}

