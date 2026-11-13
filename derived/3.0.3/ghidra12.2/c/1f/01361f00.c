
void FUN_01361f00(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 != 0xffffffff) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x18))();
    uVar2 = param_2;
    if (uVar3 <= param_2) {
      uVar2 = 0;
    }
    if ((plVar4[5] == 0) ||
       (puVar5 = *(undefined8 **)(plVar4[5] + 0x10), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar6 = 0;
    do {
      lVar7 = 0;
      do {
        lVar1 = param_1 + lVar7;
        if (*(uint *)(lVar1 + 0x30) == param_2) {
          *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
        }
        if (*(uint *)(lVar1 + 0x430) == param_2) {
          *(undefined4 *)(lVar1 + 0x430) = 0xffffffff;
        }
        if (*(uint *)(lVar1 + 0x830) == param_2) {
          *(undefined4 *)(lVar1 + 0x830) = 0xffffffff;
        }
        if (*(uint *)(lVar1 + 0xc30) == param_2) {
          *(undefined4 *)(lVar1 + 0xc30) = 0xffffffff;
        }
        lVar7 = lVar7 + 0x1000;
      } while (lVar7 != 0x48000);
      lVar6 = lVar6 + 1;
      param_1 = param_1 + 4;
    } while (lVar6 != 0x100);
    if ((plVar4[5] != 0) && (*(long *)(plVar4[5] + 0x20) != 0)) {
      local_58 = plVar4[1];
      local_50 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar2);
      uStack_48 = 0x14;
      (**(code **)(**(long **)(plVar4[5] + 0x20) + 0x20))(*(long **)(plVar4[5] + 0x20),&local_58);
    }
    lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar2);
    puVar5 = (undefined8 *)(lVar6 + plVar4[1]);
    *(undefined4 *)(puVar5 + 2) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    if ((((uVar3 & 1) == 0) && (plVar4[5] != 0)) &&
       (puVar5 = *(undefined8 **)(plVar4[5] + 0x18), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

