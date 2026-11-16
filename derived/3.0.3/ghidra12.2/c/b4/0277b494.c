
bool FUN_0277b494(uint param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,uint param_5,
                 undefined4 *param_6)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  bVar1 = -1 < (int)param_1 && param_1 < param_3;
  if (bVar1) {
    local_60 = *param_2;
    local_5c = param_2[1];
    FUN_0277e56c(&local_60,1);
    puVar2 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_58 = local_60;
        uStack_54 = local_5c;
        FUN_01b09918(&local_78,&local_58);
        local_60 = (undefined4)local_78;
        local_5c = local_78._4_4_;
      }
    }
    if ((param_5 & 1) == 0) {
      lVar7 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(param_2);
      lVar6 = *(long *)puVar2;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_68 = 0;
          local_70 = *param_2;
          uStack_6c = param_2[1];
          local_78 = &PTR_FUN_04a36b50;
          uVar3 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar6 = *(long *)(lVar6 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar6 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(param_2);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
                 (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
                local_68 = lVar6;
              }
            }
          }
          iVar4 = FUN_01ad7260(&local_78);
          if (((iVar4 != 0) && (iVar4 = FUN_01ad7260(&local_78), iVar4 != 0)) &&
             (lVar6 = FUN_01afd600(&local_78), lVar6 != 0)) {
            FUN_01ad7260(&local_78);
          }
        }
      }
    }
    else if ((short)local_60 == -2) {
      FUN_033d0760(param_1);
    }
    puVar5 = (undefined2 *)(**(code **)*param_4)(param_4,param_1);
    *puVar5 = (short)local_60;
    *(undefined1 *)(puVar5 + 1) = local_60._2_1_;
    *(undefined1 *)((long)puVar5 + 3) = local_60._3_1_;
    *(undefined4 *)(puVar5 + 2) = local_5c;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = local_60;
      param_6[1] = local_5c;
    }
  }
  return bVar1;
}

