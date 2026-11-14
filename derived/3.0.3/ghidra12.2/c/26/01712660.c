
void FUN_01712660(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  char *local_58;
  long local_50;
  byte local_48 [4];
  uint local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,4);
  if ((*(uint *)(param_1 + 0x15f4) >> 4 & 1) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x1480) +
              ((ulong)*(uint *)(*(long *)(param_1 + 0x1480) + 0x10) & 1) * 0x20 + 0x14);
    uVar3 = FUN_0277d6c4(puVar1);
    lVar6 = *(long *)puVar2;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_58 = (char *)*puVar1;
        local_50 = 0;
        uVar3 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar6 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(puVar1);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
              local_50 = lVar6;
            }
          }
        }
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_01adab50(&local_60,local_48);
        uVar3 = 0;
        do {
          local_44 = uVar3;
          if ((local_44 != 0) && (local_44 < 0xe)) {
            uVar3 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar3 = local_44;
            }
            if (((uint)((int)uVar3 >> 3) < 2) &&
               ((local_48[(uint)((int)uVar3 >> 3)] >> (ulong)(local_44 & 7) & 1) != 0)) {
              if (local_44 == 9) {
                uVar5 = 0;
                goto LAB_01712844;
              }
              break;
            }
          }
          uVar3 = local_44 + 1;
        } while (local_44 + 1 != 0xe);
      }
    }
  }
  uVar5 = 1;
LAB_01712844:
  if (((*(long *)(param_1 + 0x1138) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar6 != 0)) &&
     (plVar4 = *(long **)(lVar6 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_05248618,uVar5);
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "CommonDoorIn";
  FUN_017029bc(param_1,&local_60,6,0,0);
  return;
}

