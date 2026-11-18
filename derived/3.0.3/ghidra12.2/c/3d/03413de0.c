
void FUN_03413de0(undefined4 *param_1,short *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  char *local_58;
  long local_50;
  int local_48;
  int local_44;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_048fc9b0;
  puVar2 = PTR_DAT_04bb43c0;
  if (*param_2 != -2) {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4();
    if (*(long *)puVar2 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        *(undefined1 *)param_1 = 1;
        if (DAT_051f0338 == 0) {
          local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
          uVar5 = 0;
        }
        else {
          iVar6 = (int)*(undefined8 *)(DAT_051f0338 + 0xc);
          local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar6);
          if (iVar6 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_014e4978();
          }
        }
        iVar6 = FUN_03457ed0(param_2,uVar5);
        param_1[2] = iVar6;
        *(bool *)((long)param_1 + 1) = iVar6 == 0;
        *(bool *)((long)param_1 + 2) = iVar6 == 0;
        puVar1 = PTR_DAT_04bb2020;
        *(undefined1 *)((long)param_1 + 3) = 0;
        local_60 = puVar1 + 0x10;
        local_58 = "EnableDiyRemake";
        iVar6 = FUN_0274bce0(param_3,&local_60);
        if (iVar6 < 1) {
          bVar3 = 0;
        }
        else {
          uVar7 = FUN_03422cc0(param_2);
          if ((uVar7 & 1) == 0) {
            bVar3 = FUN_03422a60(param_2,param_3);
          }
          else {
            bVar3 = 1;
          }
        }
        puVar1 = PTR_DAT_04bc0510;
        *(byte *)((long)param_1 + 5) = bVar3 & 1;
        lVar8 = *(long *)puVar2;
        *(undefined1 *)(param_1 + 1) = 1;
        local_58 = *(char **)param_2;
        local_50 = 0;
        local_60 = puVar1 + 0x10;
        uVar4 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), lVar8 != 0)) {
              local_50 = lVar8;
            }
          }
        }
        local_44 = 0xd;
        local_48 = FUN_01ae7550(&local_60);
        *(bool *)(param_1 + 4) = local_48 == local_44;
        FUN_01afb1a0(&local_60,param_1 + 6);
      }
    }
  }
  return;
}

