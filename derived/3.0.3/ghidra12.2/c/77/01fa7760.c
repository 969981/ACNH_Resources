
bool FUN_01fa7760(long param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined1 auStack_70 [16];
  int local_60;
  int iStack_5c;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if (iVar4 != 0x758f7eaf) {
      return false;
    }
    if (((*(long *)puVar3 != 0) && (lVar8 = *(long *)(*(long *)puVar3 + 0x330), lVar8 != 0)) &&
       (*(int *)(lVar8 + 0x244) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bb4e28;
      uVar2 = *(uint *)(lVar8 + 0x123c8);
      if (uVar2 == 0xffffffff) {
        piVar9 = (int *)PTR_DAT_04bb3238;
      }
      else {
        if (uVar2 < *(uint *)(lVar8 + 0xe0)) {
          lVar8 = *(long *)(*(long *)(lVar8 + 0xe8) + (long)(int)uVar2 * 8);
        }
        else {
          lVar8 = 0;
        }
        piVar9 = (int *)(lVar8 + 8);
      }
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) == *piVar9) {
        if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           (uVar1 = **(ushort **)PTR_DAT_04bc3a48, (uVar1 & 1) == 0)) {
          if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1) {
            return false;
          }
        }
        else if (((uVar1 ^ 0xffff) & 3) == 0) {
          return false;
        }
      }
      if ((*(uint *)(param_1 + 0xafb0) >> 0x14 & 1) != 0) {
        *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xffefffff;
        if (((*(int *)(param_1 + 0x77f4) != 0x10) && (*(int *)(param_1 + 0x77b0) != 0x10)) &&
           ((*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0x13 &&
            (local_48 = (undefined *)CONCAT44(local_48._4_4_,0x13),
            *(int *)(*(long *)(param_1 + 0x10) + 0x378) != 0x13)))) {
          plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x60);
          if (plVar6 == (long *)0x0) {
            if (((DAT_052461c0 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              plVar6 = &DAT_05240280;
            }
            else {
              plVar6 = &DAT_05240280;
            }
          }
          uVar7 = (**(code **)(*plVar6 + 0x100))();
          if ((uVar7 & 1) != 0) {
            local_38 = 0;
            local_48 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_40 = PTR_DAT_04bb2010 + 0x10;
            local_28 = 0;
            local_30 = puStack_40;
            FUN_01811430(&local_48);
            FUN_012e1cb8(auStack_70,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,2,2);
            return (iStack_5c <= local_28._4_4_ && local_38._4_4_ <= iStack_4c) &&
                   (local_60 <= (int)local_28 && (int)local_38 <= local_50);
          }
        }
        return true;
      }
    }
  }
  return false;
}

