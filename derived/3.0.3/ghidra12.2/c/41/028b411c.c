
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028b411c(undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 *param_6,uint param_7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_650;
  undefined4 local_64c;
  uint local_34;
  
  if (param_6 != (undefined4 *)0x0) {
    local_34 = 0;
    FUN_0291e130(&local_650,&local_34,0);
    if (param_7 < local_34) {
      puVar4 = (undefined2 *)FUN_028b2630(param_5,param_7);
      puVar1 = PTR_DAT_04bb43c0;
      local_650._0_2_ = *puVar4;
      local_650._2_1_ = *(undefined1 *)(puVar4 + 1);
      local_650._3_1_ = *(undefined1 *)((long)puVar4 + 3);
      local_64c = *(undefined4 *)(puVar4 + 2);
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar2 = FUN_0277d6c4(&local_650);
      puVar5 = &local_650;
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          iVar3 = FUN_028b39d0(param_5,&local_650);
          if (iVar3 == 0) {
            puVar5 = (undefined4 *)&DAT_05586008;
          }
          else {
            uVar7 = FUN_028b3370(param_5,&local_650);
            *param_6 = uVar7;
            param_6[1] = param_3;
            param_6[2] = param_4;
            puVar5 = &local_650;
          }
        }
        else {
          puVar5 = &local_650;
        }
      }
      uVar7 = puVar5[1];
      *param_1 = *puVar5;
      param_1[1] = uVar7;
      return;
    }
  }
  uVar7 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar7;
  return;
}

