
void FUN_03006cd0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *local_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bc4f00;
  uVar8 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar8) {
    uVar11 = 1;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    uVar6 = 0;
    do {
      uVar2 = uVar6 + 1;
      if ((long)uVar6 < (long)(int)*(uint *)(param_1 + 0x18) && uVar6 < *(uint *)(param_1 + 0x18)) {
        lVar7 = param_1 + 8;
        if (6 < uVar6) {
          uVar9 = uVar11 & 0xfffffffffffffff8;
          do {
            uVar9 = uVar9 - 8;
            lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar7 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
          } while (uVar9 != 0);
        }
        if ((uVar2 & 7) != 0) {
          uVar9 = uVar11 & 7;
          do {
            lVar7 = *(long *)(lVar7 + 8);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x1c), lVar7 != 0)) {
          lVar4 = param_2 + uVar6 * 0x10;
          if (0xf < uVar6) {
            lVar4 = param_2;
          }
          FUN_0344d350(**(undefined8 **)(lVar7 + 0x210),lVar4);
          plVar10 = *(long **)(*(long *)(lVar7 + 0x230) + (ulong)(1 < *(uint *)(lVar7 + 0x228)) * 8)
          ;
          if (plVar10 != (long *)0x0) {
            local_68 = 0x14;
            local_70 = puVar1;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
            (**(code **)(plVar10[3] + 0x158))(0,plVar10[1]);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar6 = uVar2;
    } while (uVar2 != uVar8);
    if (((0 < (int)uVar8) && ((int)uVar8 <= (int)*(uint *)(param_1 + 0x18))) &&
       (uVar8 - 1 < *(uint *)(param_1 + 0x18))) {
      lVar7 = param_1 + 8;
      uVar3 = uVar8 & 3;
      if (3 < uVar8) {
        uVar8 = uVar8 & 0xfffffffc;
        do {
          uVar8 = uVar8 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar8 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
      if (((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x1c), lVar7 != 0)) &&
         (plVar10 = (long *)**(undefined8 **)(lVar7 + 0x230), plVar10 != (long *)0x0)) {
        if (*(char *)(param_1 + 0x118) == '\0') {
          local_70 = puVar5 + 0x10;
          local_68 = 0x14;
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
          uVar12 = 0x3f800000;
        }
        else {
          local_70 = puVar5 + 0x10;
          local_68 = 0x14;
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
          uVar12 = 0;
        }
        (**(code **)(plVar10[3] + 0x158))(uVar12,plVar10[1]);
      }
    }
  }
  return;
}

