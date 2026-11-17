
/* WARNING: Removing unreachable block (ram,0x02cfa1d4) */

void FUN_02cfa0d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  long lVar5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  local_74 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_72 = PTR_DAT_04bb37e0[2];
  local_71 = PTR_DAT_04bb37e0[3];
  local_70 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_8c = local_74;
  local_8a = local_72;
  local_89 = local_71;
  local_88 = local_70;
  local_84 = local_74;
  local_82 = local_72;
  local_81 = local_71;
  local_80 = local_70;
  local_7c = local_74;
  local_7a = local_72;
  local_79 = local_71;
  local_78 = local_70;
  local_6c = local_74;
  local_6a = local_72;
  local_69 = local_71;
  local_68 = local_70;
  local_64 = local_74;
  local_62 = local_72;
  local_61 = local_71;
  local_60 = local_70;
  local_5c = local_74;
  local_5a = local_72;
  local_59 = local_71;
  local_58 = local_70;
  local_54 = local_74;
  local_52 = local_72;
  local_51 = local_71;
  local_50 = local_70;
  local_4c = local_74;
  local_4a = local_72;
  local_49 = local_71;
  local_48 = local_70;
  if (*(int *)(param_1 + 0x927fc) != 2) goto LAB_02cfa290;
  local_44 = 3;
  local_d4 = *(undefined4 *)(param_1 + 0x92828);
  local_d0 = *(undefined4 *)(param_1 + 0x9282c);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_d4);
  if (*(long *)puVar2 == 0) {
LAB_02cfa24c:
    uVar3 = 4;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02cfa24c;
    uVar3 = 3;
  }
  if (uVar3 < 10) {
    puVar4 = (undefined2 *)(param_1 + 0x92810) + (ulong)uVar3 * 4;
    if (9 < uVar3) {
      puVar4 = (undefined2 *)(param_1 + 0x92810);
    }
  }
  else {
    puVar4 = &DAT_05586008;
  }
  local_74 = *puVar4;
  local_72 = *(undefined1 *)(puVar4 + 1);
  local_71 = *(undefined1 *)((long)puVar4 + 3);
  local_70 = *(undefined4 *)(puVar4 + 2);
LAB_02cfa290:
  local_cc = *(undefined2 *)puVar1;
  local_ca = puVar1[2];
  local_c9 = puVar1[3];
  local_d4 = *(undefined4 *)puVar1;
  local_d0 = *(undefined4 *)(puVar1 + 4);
  local_c8 = local_d0;
  local_c4 = local_cc;
  local_c2 = local_ca;
  local_c1 = local_c9;
  local_c0 = local_d0;
  local_bc = local_cc;
  local_ba = local_ca;
  local_b9 = local_c9;
  local_b8 = local_d0;
  local_b4 = local_cc;
  local_b2 = local_ca;
  local_b1 = local_c9;
  local_b0 = local_d0;
  local_ac = local_cc;
  local_aa = local_ca;
  local_a9 = local_c9;
  local_a8 = local_d0;
  local_a4 = local_cc;
  local_a2 = local_ca;
  local_a1 = local_c9;
  local_a0 = local_d0;
  local_9c = local_cc;
  local_9a = local_ca;
  local_99 = local_c9;
  local_98 = local_d0;
  local_94 = local_cc;
  local_92 = local_ca;
  local_91 = local_c9;
  local_90 = local_d0;
  FUN_02ce642c(param_1 + 0x1c498,&local_d4);
  FUN_02cddb00(param_2,&local_8c,&local_d4);
  return;
}

