
/* WARNING: Removing unreachable block (ram,0x0120f634) */

void FUN_0120f5f0(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined1 auStack_88 [8];
  uint local_80;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
  iVar5 = 0;
  lVar6 = 2;
  do {
    uVar1 = *(uint *)(param_1 + 0x9048 + lVar6 * 4);
    lVar6 = lVar6 + 1;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    iVar5 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + iVar5;
  } while (lVar6 != 0x402);
  local_70 = 0;
  if (2 < iVar5) {
    iVar5 = 3;
  }
  if (DAT_05aed670 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar7 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  if (iVar5 != 0) {
    iVar5 = -iVar5;
    do {
      FUN_01696d70(auStack_88,param_1 + 0x9048);
      uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      uVar4 = (uint)((ulong)uVar1 * 100 >> 0x20);
      if (uVar4 < 6) {
        lVar6 = 0;
      }
      else if (uVar4 < 0x11) {
        lVar6 = 1;
      }
      else if (uVar4 < 0x1c) {
        lVar6 = 2;
      }
      else if (uVar4 < 0x27) {
        lVar6 = 3;
      }
      else if (uVar4 < 0x32) {
        lVar6 = 4;
      }
      else {
        lVar6 = 5;
        if (0x45 < uVar4) {
          lVar6 = 6;
        }
      }
      local_8e = 0;
      local_8c = 0;
      local_90 = (undefined2)(&DAT_0417695c)[lVar6];
      DAT_05582b7c = uVar1;
      FUN_0277d4ac(&local_90);
      FUN_01a50970(&local_78,0,&local_90,auStack_88);
      if ((((DAT_05233970 <= (int)local_80) && ((int)local_80 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_7c)) &&
         (((int)local_7c <= DAT_05233984 &&
          (uVar1 = (local_7c & 0x1fffffe) * 0x80 + ((int)local_80 >> 1), uVar1 >> 0xf == 0)))) {
        lVar6 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x9050 + lVar6) =
             *(uint *)(param_1 + 0x9050 + lVar6) &
             (1 << (ulong)(local_80 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      bVar2 = iVar5 != -1;
      iVar5 = iVar5 + 1;
    } while (bVar2);
  }
  return;
}

