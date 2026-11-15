
void FUN_01f9c1cc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_4c;
  undefined4 local_48 [2];
  
  *(undefined1 *)(param_1 + 0xaf90) = 0;
  *(undefined1 *)(param_1 + 0xaf98) = 0;
  *(undefined1 *)(param_1 + 0xaf9c) = 0;
  *(undefined4 *)(param_1 + 0xafa4) = 0;
  puVar3 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0xafa8) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 0xafaa) = puVar3[2];
  *(undefined *)(param_1 + 0xafab) = puVar3[3];
  *(undefined4 *)(param_1 + 0xafac) = *(undefined4 *)(puVar3 + 4);
  if ((*(uint *)(param_1 + 0xafb0) >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xffffdfff;
  }
  iVar2 = *(int *)(param_1 + 0xaf8c);
  if (iVar2 == 0xc) {
    lVar7 = *(long *)(param_1 + 0x18);
    local_4c = *(undefined4 *)(lVar7 + 0x294);
    local_48[0] = 0;
    *(undefined4 *)(lVar7 + 0x294) = 0;
    lVar6 = *(long *)(param_1 + 0x18);
    uVar5 = FUN_02085a50(lVar6,1,0);
    uVar4 = local_4c;
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(lVar6 + 0x801) = 1;
      lVar1 = lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar6 + 0x294)) {
        lVar1 = lVar6 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    local_4c = 0;
    local_48[0] = 0;
    *(undefined4 *)(lVar7 + 0x294) = uVar4;
    *(undefined8 *)(param_1 + 0xb098) = 0;
    *(undefined4 *)(param_1 + 0x1203c) = 0x708;
    *(undefined4 *)(param_1 + 0x123b8) = 2;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,local_48,&local_4c,
                 PTR_DAT_04bc1600,6);
  }
  else if (iVar2 == 2) {
    FUN_01f9c378(param_1,0,0);
  }
  *(int *)(param_1 + 0xaf8c) = 0;
  return;
}

