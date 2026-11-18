
void FUN_0351efc0(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined *local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04bc4e60;
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar3 = PTR_DAT_04bc4e58;
  uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar10 = *(long **)puVar9[0x45];
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    iVar4 = *(int *)(param_2 + 0x120);
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    fVar12 = (float)iVar4;
    local_68._0_4_ = 9;
    local_70 = puVar1;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_70);
    fVar11 = (float)(**(code **)(plVar10[3] + 0xb0))(plVar10[1]);
    local_68 = CONCAT44(local_68._4_4_,0x14);
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
    fVar12 = 0.0;
    if (-1 < iVar4) {
      fVar12 = fVar11;
    }
    local_70 = puVar1;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
    (**(code **)(plVar10[3] + 0x158))(fVar12,plVar10[1]);
  }
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*puVar6 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar10 = *(long **)puVar9[0x41];
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    local_70 = PTR_DAT_04bc0878 + 0x10;
    local_68 = CONCAT44(local_68._4_4_,0x15);
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
    (**(code **)(plVar10[3] + 0x640))(plVar10[1]);
  }
  iVar4 = *(int *)(param_2 + 0x120);
  if (iVar4 == 1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0x578);
    if (((lVar7 != 0) &&
        (plVar10 = (long *)**(undefined8 **)(lVar7 + 0x230), plVar10 != (long *)0x0)) &&
       (plVar10[1] != 0)) {
      uVar13 = 0;
      uVar2 = *(int *)(param_2 + 0x40) - 1;
      if (uVar2 < 4) {
        uVar13 = *(undefined4 *)(&DAT_04102750 + (long)(int)uVar2 * 4);
      }
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = CONCAT44(local_68._4_4_,0x14);
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
      (**(code **)(plVar10[3] + 0x158))(uVar13,plVar10[1]);
    }
    FUN_0351f400(param_1,1,param_2);
    lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0x578);
    if (lVar7 != 0) {
      iVar4 = *(int *)(param_2 + 0x40);
      (**(code **)(DAT_056f8190 + 0x18))(&DAT_056f8190);
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = DAT_056f8198;
      if ((iVar4 - 3U < 2) && (**(long **)(lVar7 + 0x220) != 0)) {
        FUN_033ff0f0(**(long **)(lVar7 + 0x220),param_2,&local_70,&DAT_05767dd0,0);
      }
      if (iVar4 == 1) {
        puVar9 = &DAT_05767db0;
        puVar6 = PTR_PTR_04bb2238;
      }
      else {
        if (iVar4 != 2) {
          return;
        }
        puVar9 = &DAT_05767dc0;
        puVar6 = (undefined *)(param_2 + 0x20);
      }
      FUN_0351f8b8(lVar7,&local_70,puVar9,param_2,puVar6);
    }
  }
  else if (1 < iVar4) {
    lVar7 = 0;
    if (3 < iVar4) {
      iVar4 = 4;
    }
    puVar6 = PTR_DAT_04bc4f00 + 0x10;
    do {
      if (((((uint)(lVar7 + 2U) < 7) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0x218) + lVar7 * 8 + 0x580), lVar8 != 0)) &&
          (plVar10 = (long *)**(undefined8 **)(lVar8 + 0x230), plVar10 != (long *)0x0)) &&
         (plVar10[1] != 0)) {
        uVar13 = 0;
        uVar2 = *(int *)(param_2 + 0x40) - 1;
        if (uVar2 < 4) {
          uVar13 = *(undefined4 *)(&DAT_04102750 + (long)(int)uVar2 * 4);
        }
        local_68 = CONCAT44(local_68._4_4_,0x14);
        local_70 = puVar6;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
        (**(code **)(plVar10[3] + 0x158))(uVar13,plVar10[1]);
      }
      FUN_0351f400(param_1,lVar7 + 2U & 0xffffffff,param_2);
      lVar7 = lVar7 + 1;
      param_2 = param_2 + 0x48;
    } while ((ulong)(iVar4 + 2) - 2 != lVar7);
  }
  return;
}

