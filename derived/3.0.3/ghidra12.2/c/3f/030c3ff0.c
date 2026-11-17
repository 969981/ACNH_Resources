
void FUN_030c3ff0(long param_1,long param_2,char *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  undefined *local_70;
  undefined4 local_68;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x208) != 0) {
      *(undefined1 *)(param_1 + 0x4e4) = 0;
      FUN_030c3c2c(param_1,param_3);
      plVar8 = *(long **)(param_1 + 0x478);
      if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) &&
         ((*(long *)(param_1 + 0x228) == 0 || (*(long *)(*(long *)(param_1 + 0x228) + 8) == 0)))) {
        if (*param_3 == '\x1f') {
          local_70 = PTR_DAT_04bc4e68 + 0x10;
          local_68 = 7;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
          puVar4 = (undefined8 *)(plVar8[3] + 0x1c0);
        }
        else {
          local_70 = PTR_DAT_04bc4e68 + 0x10;
          local_68 = 6;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
          puVar4 = (undefined8 *)(plVar8[3] + 0x1b8);
        }
        (*(code *)*puVar4)(plVar8[1]);
      }
      uVar7 = 0;
      bVar10 = false;
      lVar9 = -0x230;
      do {
        lVar1 = param_1 + lVar9;
        lVar5 = *(long *)(lVar1 + 0x458);
        if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar7);
          lVar6 = param_2 + 0x228 + (ulong)uVar7 * 0x50;
          if (6 < uVar7) {
            lVar6 = param_2 + 0x228;
          }
          uVar2 = *(uint *)(lVar6 + 0x28);
          if (uVar2 < 0x10e) {
            lVar6 = *(long *)(param_1 + 0x208);
            *(uint *)(lVar1 + 0x480) = uVar2;
            lVar6 = lVar6 + (ulong)uVar2 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a8) == 2) {
              *(undefined1 *)(lVar1 + 0x484) = 0;
              FUN_03463a4c(lVar6 + 8,lVar6 + 0x150,lVar1 + 0x460);
              goto LAB_030c4110;
            }
            bVar10 = true;
            *(undefined1 *)(lVar1 + 0x484) = 1;
            lVar5 = *(long *)(lVar5 + 8);
          }
          else {
            *(undefined4 *)(lVar1 + 0x480) = 0xffffffff;
            *(undefined1 *)(lVar1 + 0x484) = 0;
            lVar5 = *(long *)(lVar5 + 8);
          }
          if (lVar5 != 0) {
            *(undefined8 *)(lVar1 + 0x468) = *(undefined8 *)(lVar1 + 0x490);
            *(undefined4 *)(lVar1 + 0x470) = *(undefined4 *)(lVar1 + 0x498);
            *(undefined4 *)(lVar1 + 0x478) = *(undefined4 *)(lVar1 + 0x4a0);
          }
        }
LAB_030c4110:
        lVar9 = lVar9 + 0x50;
        uVar7 = uVar7 + 1;
      } while (lVar9 != 0);
      if (bVar10) {
        plVar8 = *(long **)(param_1 + 0x210);
        *(undefined1 *)(param_1 + 0x218) = 1;
        *(undefined4 *)(param_1 + 0x21c) = 8;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          local_70 = PTR_DAT_04bc0cb8 + 0x10;
          local_68 = 0x14;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
          (**(code **)(plVar8[3] + 0x158))(plVar8[1],0);
        }
        plVar8 = *(long **)(param_1 + 0x220);
        if ((plVar8 != (long *)0x0) && (plVar3 = (long *)plVar8[0x36], plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      else {
        if ((*(char *)(param_1 + 0x218) != '\0') || (-1 < *(int *)(param_1 + 0x21c))) {
          lVar9 = *(long *)(param_1 + 0x220);
          if ((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) {
            (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x50))();
            (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x20))(*(long **)(lVar9 + 0x1b0),0);
          }
          *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x218) = 0;
        }
        plVar8 = *(long **)(param_1 + 0x210);
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
          local_70 = PTR_DAT_04bc0cb8 + 0x10;
          local_68 = 0x14;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
          (**(code **)(plVar8[3] + 0x158))(plVar8[1],0xff);
        }
      }
      *(undefined1 *)(param_1 + 0x4e4) = 1;
      *(char *)(param_1 + 0x4d8) = *param_3;
      *(char *)(param_1 + 0x4d9) = param_3[1];
      *(char *)(param_1 + 0x4da) = param_3[2];
      *(char *)(param_1 + 0x4db) = param_3[3];
      *(char *)(param_1 + 0x4dc) = param_3[4];
      *(char *)(param_1 + 0x4dd) = param_3[5];
      *(char *)(param_1 + 0x4de) = param_3[6];
      *(char *)(param_1 + 0x4df) = param_3[7];
      *(char *)(param_1 + 0x4e0) = param_3[8];
      *(undefined2 *)(param_1 + 0x4e2) = *(undefined2 *)(param_3 + 10);
      *(undefined1 *)(param_2 + 0x4e4) = 0;
      *(undefined4 *)(param_2 + 0x250) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x254) = 0;
      *(undefined4 *)(param_2 + 0x2a0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x2a4) = 0;
      *(undefined4 *)(param_2 + 0x2f0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x2f4) = 0;
      *(undefined4 *)(param_2 + 0x340) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x344) = 0;
      *(undefined4 *)(param_2 + 0x390) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x394) = 0;
      *(undefined4 *)(param_2 + 0x3e0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x3e4) = 0;
      *(undefined4 *)(param_2 + 0x430) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x434) = 0;
      *(undefined1 *)(param_2 + 0x218) = 0;
      *(undefined4 *)(param_2 + 0x21c) = 0xffffffff;
    }
  }
  return;
}

