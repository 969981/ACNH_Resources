
void FUN_0301cd90(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  long *plVar5;
  uint local_54;
  undefined **local_50;
  undefined4 local_48;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    uVar3 = 0;
    do {
      uVar2 = *(uint *)((long)&DAT_056d9c00 + (-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4));
      plVar5 = (long *)(param_1 + 0x5c0);
      if (((((((int)uVar2 < 1) || (plVar5 = (long *)(param_1 + 0x5c8), uVar2 == 1)) ||
            ((plVar5 = (long *)(param_1 + 0x5d0), uVar2 < 3 ||
             ((plVar5 = (long *)(param_1 + 0x5d8), uVar2 == 3 ||
              (plVar5 = (long *)(param_1 + 0x5e0), uVar2 < 5)))))) ||
           (plVar5 = (long *)(param_1 + 0x5e8), uVar2 == 5)) ||
          ((((plVar5 = (long *)(param_1 + 0x5f0), uVar2 < 7 ||
             (plVar5 = (long *)(param_1 + 0x5f8), uVar2 == 7)) ||
            (plVar5 = (long *)(param_1 + 0x600), uVar2 < 9)) ||
           ((plVar5 = (long *)(param_1 + 0x608), uVar2 == 9 ||
            (plVar5 = (long *)(param_1 + 0x610), uVar2 < 0xb)))))) ||
         (((plVar5 = (long *)(param_1 + 0x618), uVar2 == 0xb ||
           ((plVar5 = (long *)(param_1 + 0x620), uVar2 < 0xd ||
            (plVar5 = (long *)(param_1 + 0x628), uVar2 == 0xd)))) ||
          ((plVar5 = (long *)(param_1 + 0x630), uVar2 < 0xf ||
           (plVar5 = (long *)(param_1 + 0x638), uVar2 == 0xf)))))) {
        if (*plVar5 == param_4) goto LAB_0301cee8;
      }
      else if (param_4 == 0) {
LAB_0301cee8:
        uVar2 = (&DAT_056d9c04)[(long)(int)uVar3 * 4];
        local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar2);
        if (uVar2 == 0xffffffff) {
          uVar3 = (ulong)*(uint *)(param_2 + 0x8f8);
        }
        else {
          plVar5 = (long *)(param_2 + 0x998);
          uVar3 = (ulong)uVar2;
          plVar1 = plVar5 + uVar3;
          if (0x12 < uVar2) {
            plVar1 = plVar5;
          }
          if (*plVar1 != 0) {
            uVar3 = (ulong)uVar2;
            if (0x12 < uVar2) {
              uVar3 = 0;
            }
            puVar4 = (uint *)plVar5[uVar3];
            uVar2 = puVar4[4];
            if (*puVar4 <= uVar2) {
              uVar2 = 0;
            }
            uVar3 = (ulong)*(uint *)(*(long *)(puVar4 + 2) + (long)(int)uVar2 * 4);
          }
          *(undefined4 *)(param_2 + 0x8fc) = *(undefined4 *)(param_2 + 0x8f8);
          plVar5 = (long *)(param_2 + 0x900) + *(uint *)(param_2 + 0x8fc);
          if (0x12 < *(uint *)(param_2 + 0x8fc)) {
            plVar5 = (long *)(param_2 + 0x900);
          }
          if ((long *)*plVar5 != (long *)0x0) {
            (**(code **)(*(long *)*plVar5 + 0x28))();
          }
          *(int *)(param_2 + 0x8f8) = (int)uVar3;
        }
        FUN_0310a61c(param_3,uVar3);
        FUN_03025360(param_1,param_2);
        plVar5 = (long *)(param_2 + 0x998);
        plVar1 = plVar5 + *(uint *)(param_2 + 0x8f8);
        if (0x12 < *(uint *)(param_2 + 0x8f8)) {
          plVar1 = plVar5;
        }
        if (*plVar1 == 0) {
          local_54 = 0;
        }
        else {
          plVar1 = plVar5 + *(uint *)(param_2 + 0x8f8);
          if (0x12 < *(uint *)(param_2 + 0x8f8)) {
            plVar1 = plVar5;
          }
          local_54 = *(uint *)(*plVar1 + 0x10);
          if (local_54 != 2) {
            local_54 = (uint)(local_54 == 1);
          }
        }
        if (*(long *)(param_1 + 0x630) == 0) {
          return;
        }
        plVar5 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x630) + 0x2f0);
        if (plVar5 == (long *)0x0) {
          return;
        }
        local_50 = &PTR_LAB_04aa7fe0;
        local_48 = 0x14;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
        (**(code **)(plVar5[3] + 0x158))((float)(int)local_54,plVar5[1]);
        return;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
    } while (uVar2 != 10);
  }
  return;
}

