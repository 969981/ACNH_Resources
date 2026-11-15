
void FUN_01e3f25c(long param_1,ulong param_2)

{
  uint *puVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_24;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x690) == 0) {
      bVar7 = 0;
    }
    else {
      lVar8 = *DAT_0537d558;
      bVar7 = *(byte *)(lVar8 + 0x473);
      pbVar6 = PTR_DAT_04bc1220;
      if ((long)(char)bVar7 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
        if (7 < bVar7) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar8 + 0x473);
        }
      }
      bVar7 = 0;
      uVar3 = *(ushort *)(*(long *)(param_1 + 0x690) + 5) >> 2;
      if (((ushort)(byte)*PTR_DAT_04bb5018 != (uVar3 & 0xff)) && ((ushort)*pbVar6 != (uVar3 & 0xff))
         ) {
        bVar7 = *(byte *)(param_1 + 0x69f) & 1;
      }
    }
    *(byte *)(*(long *)(param_1 + 0xa0) + 0x5074) = bVar7;
    if (*(int *)(param_1 + 0x750) == 0) {
      plVar5 = *(long **)(param_1 + 0x68);
      local_8[0] = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
        uVar9 = 0xc3fa0000;
      }
      else {
        sVar2 = *(short *)PTR_DAT_04bb6298;
        if (sVar2 == -1) {
          local_24 = 7;
        }
        else {
          local_4 = 1;
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
          if (0xff < (uint)(int)sVar2) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          local_24 = 7;
          if ((*puVar1 & 2) != 0) {
            local_24 = 5;
          }
        }
        uVar9 = FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),plVar5 + 0x4f,&local_24,1,
                             local_8);
        plVar5 = *(long **)(param_1 + 0x68);
      }
      (**(code **)(*plVar5 + 0x110))(uVar9,plVar5);
    }
  }
  else {
    if (((*(byte *)(param_1 + 0x69e) & 1) == 0) || (*(int *)(param_1 + 0x750) == 1)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(param_1 + 0x750) != 3;
    }
    *(bool *)(*(long *)(param_1 + 0xa0) + 0x5074) = bVar4;
  }
  return;
}

