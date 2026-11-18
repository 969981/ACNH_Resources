
void FUN_0371f550(long param_1)

{
  undefined2 *puVar1;
  uint *puVar2;
  short sVar3;
  byte bVar4;
  uint local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  byte local_14 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x1a & 1) != 0) &&
       (((*(uint *)(&DAT_00001230 + param_1) ^ 0xffffffff) & 0x240) == 0)) {
      local_80 = *(undefined2 *)PTR_DAT_04bb37e0;
      puVar1 = (undefined2 *)(PTR_DAT_04bb37e0 + 2);
      local_6e = *(undefined1 *)puVar1;
      local_6d = PTR_DAT_04bb37e0[3];
      local_76 = *puVar1;
      local_7e = *puVar1;
      local_7c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      bVar4 = *PTR_DAT_04bb32e0;
      local_38 = 1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      local_34 = 0;
      local_84 = (uint)bVar4;
      local_78 = local_80;
      local_74 = local_7c;
      local_70 = local_80;
      local_6c = local_7c;
      local_68 = local_80;
      local_66 = local_6e;
      local_65 = local_6d;
      local_64 = local_7c;
      local_60 = local_80;
      local_5e = local_6e;
      local_5d = local_6d;
      local_5c = local_7c;
      local_58 = local_80;
      local_56 = local_6e;
      local_55 = local_6d;
      local_54 = local_7c;
      local_50 = local_80;
      local_4e = local_6e;
      local_4d = local_6d;
      local_4c = local_7c;
      local_48 = local_80;
      local_46 = local_6e;
      local_45 = local_6d;
      local_44 = local_7c;
      local_40 = local_80;
      local_3e = local_6e;
      local_3d = local_6d;
      local_3c = local_7c;
      FUN_0252d11c(local_14);
      local_80 = *(undefined2 *)(param_1 + 0x11d0);
      local_38 = 0;
      local_34 = 0;
      local_7e = *(undefined2 *)(param_1 + 0x11d2);
      local_7c = *(undefined4 *)(param_1 + 0x11d4);
      local_78 = *(undefined2 *)(param_1 + 0x11d8);
      local_76 = *(undefined2 *)(param_1 + 0x11da);
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      local_84 = CONCAT31(local_84._1_3_,local_14[0]);
      local_74 = *(undefined4 *)(param_1 + 0x11dc);
      local_70 = *(undefined2 *)(param_1 + 0x11e0);
      local_6e = *(undefined1 *)(param_1 + 0x11e2);
      local_6d = *(undefined1 *)(param_1 + 0x11e3);
      local_6c = *(undefined4 *)(param_1 + 0x11e4);
      local_68 = *(undefined2 *)(param_1 + 0x11e8);
      local_66 = *(undefined1 *)(param_1 + 0x11ea);
      local_65 = *(undefined1 *)(param_1 + 0x11eb);
      local_64 = *(undefined4 *)(param_1 + 0x11ec);
      local_60 = *(undefined2 *)(param_1 + 0x11f0);
      local_5e = *(undefined1 *)(param_1 + 0x11f2);
      local_5d = *(undefined1 *)(param_1 + 0x11f3);
      local_5c = *(undefined4 *)(param_1 + 0x11f4);
      local_58 = *(undefined2 *)(param_1 + 0x11f8);
      local_56 = *(undefined1 *)(param_1 + 0x11fa);
      local_55 = *(undefined1 *)(param_1 + 0x11fb);
      local_54 = *(undefined4 *)(param_1 + 0x11fc);
      local_50 = *(undefined2 *)(param_1 + 0x1200);
      local_4e = *(undefined1 *)(param_1 + 0x1202);
      local_4d = *(undefined1 *)(param_1 + 0x1203);
      local_4c = *(undefined4 *)(param_1 + 0x1204);
      local_48 = *(undefined2 *)(param_1 + 0x1208);
      local_46 = *(undefined1 *)(param_1 + 0x120a);
      local_45 = *(undefined1 *)(param_1 + 0x120b);
      local_44 = *(undefined4 *)(param_1 + 0x120c);
      local_40 = *(undefined2 *)(param_1 + 0x1210);
      local_3e = *(undefined1 *)(param_1 + 0x1212);
      local_3d = *(undefined1 *)(param_1 + 0x1213);
      local_3c = *(undefined4 *)(param_1 + 0x1214);
      FUN_02543cdc(&local_84);
    }
  }
  *(uint *)(&DAT_00001230 + param_1) =
       (*(uint *)(&DAT_00001230 + param_1) & 0x1000 ^ 0xfffffdff) &
       *(uint *)(&DAT_00001230 + param_1);
  return;
}

