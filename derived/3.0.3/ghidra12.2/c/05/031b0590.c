
void FUN_031b0590(undefined4 *param_1,long param_2,byte *param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  byte local_90 [8];
  undefined *local_88;
  long lStack_80;
  undefined *local_78;
  undefined *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  byte local_60;
  undefined4 local_5f;
  undefined1 local_5b;
  undefined4 local_58;
  
  puVar2 = PTR_DAT_04bb6538;
  puVar1 = PTR_DAT_04bb2120;
  if (param_2 != 0) {
    bVar5 = *param_3;
    local_60 = param_4 & 1;
    local_5f = 0x101;
    local_5b = 0;
    local_58 = 0;
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_90[0] = bVar5;
    if (7 < bVar5) {
      local_90[0] = 0xff;
    }
    local_70 = PTR_DAT_04bb2120;
    local_68 = 0;
    uStack_62 = 0;
    lVar6 = *(long *)PTR_DAT_04bb6538;
    if ((lVar6 == 0) ||
       (((lStack_80 = param_2, local_78 = local_88, *(long *)(lVar6 + 0x210) != 0 &&
         ((plVar3 = *(long **)(**(long **)(*(long *)(lVar6 + 0x210) + 0x3f8) + 0x1b0),
          plVar3 == (long *)0x0 || (uVar4 = (**(code **)(*plVar3 + 0x58))(), (uVar4 & 1) == 0)))) ||
        (1 < *(uint *)(lVar6 + 0x1b0))))) {
      *(long *)(param_1 + 6) = param_2;
      *param_1 = 1;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      *(byte *)(param_1 + 2) = bVar5;
      param_1[0x10] = 0;
      *(undefined **)(param_1 + 10) = puVar1;
      *(ulong *)(param_1 + 0xc) = CONCAT26(uStack_62,local_68);
      *(ulong *)((long)param_1 + 0x36) =
           CONCAT17(local_5b,CONCAT43(local_5f,CONCAT12(local_60,uStack_62)));
    }
    else {
      FUN_02dfa190(*(undefined8 *)puVar2,local_90);
      plVar3 = *(long **)puVar2;
      if (4 < (int)plVar3[0x15] - 3U) {
        if (((int)plVar3[0x15] == 5) || ((int)plVar3[0x15] == 2)) {
          FUN_0386b170(plVar3[0x13],plVar3);
          *(undefined1 *)((long)plVar3 + 0x165) = 1;
          return;
        }
        if (6 < *(uint *)(plVar3 + 0x15)) {
          return;
        }
        if ((1 << (ulong)(*(uint *)(plVar3 + 0x15) & 0x1f) & 0x58U) == 0) {
          return;
        }
      }
      (**(code **)(*plVar3 + 0xa8))(plVar3);
    }
  }
  return;
}

