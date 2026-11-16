
void FUN_02669cc0(byte *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  byte local_24 [4];
  
  if (param_2 != 0) {
    FUN_02507c6c(local_4c,7,1,0,0);
    local_54 = local_48;
    local_58[0] = 0xff;
    if (local_4c[0] < 8) {
      local_58[0] = local_4c[0];
    }
    local_50 = local_44;
    if (local_4c[0] < 8) {
      *param_1 = local_4c[0];
      puVar1 = PTR_DAT_04bb4f78;
      local_24[0] = local_4c[0];
      lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
      bVar6 = local_4c[0];
      while( true ) {
        if (lVar3 == param_2) {
          return;
        }
        uVar2 = (ulong)bVar6;
        do {
          uVar7 = uVar2;
          if (uVar7 == 7) goto LAB_02669d24;
          uVar4 = FUN_02507924(local_58,&DAT_0548e169 + uVar7);
          uVar2 = uVar7 + 1;
        } while ((uVar4 & 1) == 0);
        bVar6 = (&DAT_0548e169)[uVar7];
        if (7 < bVar6) break;
        uVar5 = *(undefined8 *)puVar1;
        *param_1 = bVar6;
        local_58[0] = bVar6;
        local_24[0] = bVar6;
        lVar3 = FUN_025830c0(uVar5,local_24,1);
      }
    }
  }
LAB_02669d24:
  bVar6 = *PTR_DAT_04bb32e0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *param_1 = bVar6;
  return;
}

