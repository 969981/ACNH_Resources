
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014be910(long param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined *local_50;
  int local_48;
  int local_44;
  
  *(undefined2 *)(param_1 + 0xc) = *param_2;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 2);
  local_a0 = *param_3;
  *(undefined4 *)(param_1 + 0x14) = local_a0;
  uStack_9c = param_3[1];
  *(undefined4 *)(param_1 + 0x18) = uStack_9c;
  local_98 = param_3[2];
  *(undefined4 *)(param_1 + 0x1c) = local_98;
  local_94 = *param_4;
  *(undefined4 *)(param_1 + 0x20) = local_94;
  *(int *)(param_1 + 0x24) = param_5;
  if (param_5 == 1) {
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar4 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    local_80 = (undefined *)CONCAT44(*(undefined4 *)(puVar6 + 7),(undefined4)local_80);
    uVar3 = FUN_017baf44();
    local_78 = CONCAT71(local_78._1_7_,uVar3) & 0xffffffffffffff01;
    fVar7 = *(float *)(param_1 + 0x14);
    local_88 = PTR_DAT_04bb6268 + 0x10;
    fVar8 = *(float *)(param_1 + 0x1c);
    local_60 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    local_58 = (undefined **)0x0;
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,*(int *)(param_1 + 0x20) + 0x20000000U >> 0x1e);
    if (((DAT_051ebdb0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_051ebdb0), iVar4 != 0)) {
      DAT_051ebda0 = PTR_DAT_04bb2e18 + 0x10;
      _DAT_051ebda8 = 0x200000002;
      __cxa_guard_release(&DAT_051ebdb0);
    }
    iVar4 = DAT_051ebda8;
    iVar2 = DAT_051ebdac;
    if (((uint)local_a8 & 0x80000001) != 1) {
      iVar4 = DAT_051ebdac;
      iVar2 = DAT_051ebda8;
    }
    fVar7 = fVar7 - ((float)iVar2 * 0.5 * 5.0 + -2.5);
    fVar8 = fVar8 - ((float)iVar4 * 0.5 * 5.0 + -2.5);
    local_58 = (undefined **)
               CONCAT44((int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0),
                        (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0));
    FUN_01a50ed0(&local_88,(undefined2 *)(param_1 + 0xc),&local_60,*(undefined4 *)(param_1 + 0x24));
    *(float *)(param_1 + 0x18) = fVar7;
  }
  else if (param_5 == 0) {
    local_68 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_78 = 0;
    uStack_90 = 0;
    local_a8 = PTR_DAT_04bbbc20 + 0x10;
    local_80 = puVar1;
    puStack_70 = puVar1;
    FUN_014bec54(param_1,&local_88,&local_a8);
    iVar2 = (int)local_78;
    iVar4 = local_68._4_4_ + 1;
    local_48 = (int)local_78;
    local_44 = local_78._4_4_;
    if (iVar4 == local_78._4_4_) {
      *(undefined4 *)(param_1 + 0x18) = 0xc3fa0000;
    }
    else {
      fVar8 = -500.0;
      local_60 = &local_80;
      local_58 = &puStack_70;
      local_50 = puVar1;
      do {
        fVar7 = (float)FUN_013866c0(&local_50,0);
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar7;
        if (local_48 < *(int *)(local_58 + 1)) {
          local_48 = local_48 + 1;
        }
        else {
          local_44 = local_44 + 1;
          local_48 = *(int *)(local_60 + 1);
        }
      } while (iVar2 != local_48 || iVar4 != local_44);
      *(float *)(param_1 + 0x18) = fVar8;
    }
  }
  return;
}

