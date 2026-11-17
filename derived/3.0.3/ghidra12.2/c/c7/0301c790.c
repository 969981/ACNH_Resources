
void FUN_0301c790(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined **local_80;
  undefined4 local_78;
  
  if (param_1 != 0) {
    uVar6 = 0;
    do {
      uVar1 = *(uint *)((long)&DAT_056d9c00 + (-(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4));
      plVar5 = (long *)(param_1 + 0x5c0);
      if ((((((int)uVar1 < 1) || (plVar5 = (long *)(param_1 + 0x5c8), uVar1 == 1)) ||
           (plVar5 = (long *)(param_1 + 0x5d0), uVar1 < 3)) ||
          ((plVar5 = (long *)(param_1 + 0x5d8), uVar1 == 3 ||
           (plVar5 = (long *)(param_1 + 0x5e0), uVar1 < 5)))) ||
         ((((plVar5 = (long *)(param_1 + 0x5e8), uVar1 == 5 ||
            ((plVar5 = (long *)(param_1 + 0x5f0), uVar1 < 7 ||
             (plVar5 = (long *)(param_1 + 0x5f8), uVar1 == 7)))) ||
           (plVar5 = (long *)(param_1 + 0x600), uVar1 < 9)) ||
          ((((plVar5 = (long *)(param_1 + 0x608), uVar1 == 9 ||
             (plVar5 = (long *)(param_1 + 0x610), uVar1 < 0xb)) ||
            (plVar5 = (long *)(param_1 + 0x618), uVar1 == 0xb)) ||
           (((plVar5 = (long *)(param_1 + 0x620), uVar1 < 0xd ||
             (plVar5 = (long *)(param_1 + 0x628), uVar1 == 0xd)) ||
            ((plVar5 = (long *)(param_1 + 0x630), uVar1 < 0xf ||
             (plVar5 = (long *)(param_1 + 0x638), uVar1 == 0xf)))))))))) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      lVar4 = (long)(int)uVar6;
      if (((((&DAT_056d9c04)[lVar4 * 4] == -1) ||
           (uVar7 = 0, *(int *)(param_2 + 0x8f8) != (&DAT_056d9c04)[lVar4 * 4])) &&
          (((&DAT_056d9c08)[lVar4 * 4] == -1 ||
           (uVar7 = 0, *(int *)(param_2 + 0x8f8) != (&DAT_056d9c08)[lVar4 * 4])))) &&
         (((&DAT_056d9c0c)[lVar4 * 4] == -1 ||
          (uVar7 = 0, *(int *)(param_2 + 0x8f8) != (&DAT_056d9c0c)[lVar4 * 4])))) {
        uVar7 = 0x3f800000;
      }
      if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0)
         ) {
        local_80 = &PTR_LAB_04aa7fe0;
        local_78 = 0x14;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
        (**(code **)(plVar5[3] + 0x158))(uVar7,plVar5[1]);
      }
      puVar2 = PTR_DAT_04bc4f00;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while (uVar1 != 10);
    lVar3 = *(long *)(param_1 + 0x608);
    if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0))
    {
      local_80 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      local_78 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
    lVar3 = *(long *)(param_1 + 0x620);
    if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0))
    {
      local_80 = (undefined **)(puVar2 + 0x10);
      local_78 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
    lVar3 = *(long *)(param_1 + 0x5f8);
    if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0))
    {
      local_80 = (undefined **)(puVar2 + 0x10);
      local_78 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
    lVar3 = *(long *)(param_1 + 0x628);
    if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0))
    {
      local_80 = (undefined **)(puVar2 + 0x10);
      local_78 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
    lVar3 = *(long *)(param_1 + 0x638);
    if ((lVar3 != 0) && (plVar5 = (long *)**(undefined8 **)(lVar3 + 0x2f0), plVar5 != (long *)0x0))
    {
      local_80 = (undefined **)(puVar2 + 0x10);
      local_78 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
      (**(code **)(plVar5[3] + 0x158))(0x3f800000,plVar5[1]);
    }
  }
  return;
}

