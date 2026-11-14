
void FUN_014f3210(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *local_4470;
  undefined8 local_4468;
  int local_4460;
  undefined4 uStack_445c;
  undefined4 local_4458;
  undefined4 uStack_4454;
  undefined1 local_4450;
  undefined4 local_2290;
  undefined4 local_228c;
  undefined4 local_2288;
  undefined4 local_2284;
  undefined4 local_2280;
  undefined4 local_227c;
  undefined1 local_2278;
  undefined1 local_2277;
  undefined8 local_2270;
  undefined8 local_2268;
  long **local_2260;
  long **local_2258;
  long *local_2250 [5];
  long alStack_2228 [890];
  undefined8 local_658;
  undefined1 auStack_630 [1440];
  
  if (*(int *)(param_4 + 0x38) == 0) {
    return;
  }
  uVar5 = FUN_014e5b54(0);
  if ((uVar5 & 1) == 0) {
LAB_014f336c:
    lVar6 = param_4 + 0x1a8;
    lVar11 = param_4 + 0x20;
    if (*(long *)(param_4 + 0x1b0) != lVar6) {
      lVar13 = (long)*(int *)(param_4 + 0x1bc);
      lVar12 = *(long *)(param_4 + 0x1b0) - lVar13;
      do {
        FUN_014e9900(lVar12,lVar12 + 0x20,param_7,0);
        lVar12 = *(long *)(lVar12 + lVar13 + 8) - lVar13;
      } while (lVar12 != lVar6 - lVar13);
    }
    lVar12 = 0xb2;
    local_2268 = (undefined1 *)0x0;
    local_2270 = (undefined *)0x0;
    local_2260 = local_2250;
    local_2250[0] = alStack_2228;
    plVar7 = local_2250[0];
    do {
      lVar12 = lVar12 + -2;
      *plVar7 = (long)(plVar7 + 5);
      plVar7[5] = (long)(plVar7 + 10);
      plVar7 = plVar7 + 10;
    } while (lVar12 != 0);
    local_658 = 0;
    if (auStack_630 != (undefined1 *)0x0) {
      local_2270 = (undefined *)0xb400000000;
      local_2268 = auStack_630;
    }
    local_2258 = local_2260;
    FUN_014bbff0(&local_2270,lVar11);
    uVar14 = FUN_014e8b30(lVar11);
    uVar16 = param_2;
    uVar17 = param_3;
    uVar15 = FUN_014e8b30(lVar11);
    uVar3 = FUN_014efa80(lVar11);
    FUN_014e2eb0(&local_4470,&local_2270);
    local_2277 = 1;
    local_2290 = uVar14;
    local_228c = param_2;
    local_2288 = param_3;
    local_2284 = uVar15;
    local_2280 = uVar16;
    local_227c = uVar17;
    local_2278 = uVar3;
    FUN_014bb8b8(&local_4470);
    FUN_014ec5b0(lVar11,0);
    if (*(long *)(param_4 + 0x1b0) != lVar6) {
      lVar12 = (long)*(int *)(param_4 + 0x1bc);
      lVar11 = *(long *)(param_4 + 0x1b0) - lVar12;
      do {
        FUN_014ebb40(lVar11,lVar11 + 0x20,0);
        lVar11 = *(long *)(lVar11 + lVar12 + 8) - lVar12;
      } while (lVar11 != lVar6 - lVar12);
    }
  }
  else {
    local_4450 = 0;
    local_4470 = &uStack_445c;
    local_4468 = 0xb4;
    uStack_445c = *(undefined4 *)(param_4 + 0x80);
    local_4458 = *(undefined4 *)(param_4 + 0x84);
    local_4460 = 1;
    uStack_4454 = 0;
    if (param_6 == 1) {
      lVar6 = *(long *)PTR_DAT_04bb7ff8;
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0xef8) != 0x45)) {
LAB_014f3338:
        iVar4 = 0;
      }
      else {
        bVar9 = *(byte *)(lVar6 + 0xef4);
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_2270 = (undefined *)CONCAT71(local_2270._1_7_,bVar9);
        lVar6 = FUN_02ef3c90(&local_2270);
        iVar4 = 0;
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x228) = 0;
          iVar4 = 2;
        }
      }
LAB_014f333c:
      if ((iVar4 != 0) && (0 < local_4460)) {
        iVar4 = 0;
        if ((int)local_4468 <= local_4468._4_4_) {
          iVar4 = (int)local_4468;
        }
        if (*(char *)(local_4470 + (long)(local_4468._4_4_ - iVar4) * 4 + 3) != '\0')
        goto LAB_014f336c;
      }
    }
    else if (param_6 == 0) {
      lVar6 = *(long *)PTR_DAT_04bb7ff8;
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0xef8) != 0x45)) goto LAB_014f3338;
      bVar9 = *(byte *)(lVar6 + 0xef4);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_2270 = (undefined *)CONCAT71(local_2270._1_7_,bVar9);
      lVar6 = FUN_02ef3c90(&local_2270);
      iVar4 = 0;
      if (lVar6 != 0) {
        iVar4 = FUN_031696e0(lVar6,&local_4470,param_5);
      }
      goto LAB_014f333c;
    }
    *(undefined4 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x50) = 0;
    *(undefined4 *)(param_4 + 0x58) = 0;
    local_2270 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_2270);
    puVar1 = PTR_DAT_04bb3238;
    *(undefined1 *)(param_4 + 0xa8) = 0;
    puVar2 = PTR_DAT_04bbcf08;
    *(undefined8 *)(param_4 + 0x88) = 0;
    *(undefined8 *)(param_4 + 0x8d) = 0;
    local_2268 = (undefined1 *)((ulong)local_2268._4_4_ << 0x20);
    uVar16 = *(undefined4 *)puVar1;
    *(undefined4 *)(param_4 + 0x80) = (undefined4)local_2270;
    *(undefined4 *)(param_4 + 0x84) = local_2270._4_4_;
    *(undefined4 *)(param_4 + 0xac) = uVar16;
    local_2270 = puVar2 + 0x10;
    FUN_014ba7d4(param_4 + 0xb0,&local_2270);
    if (0 < *(int *)(param_4 + 0x108)) {
      lVar6 = 0;
      puVar8 = *(undefined8 **)(param_4 + 0x118);
      do {
        puVar10 = *(undefined8 **)(*(long *)(param_4 + 0x110) + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *puVar10 = puVar8;
        *(undefined8 **)(param_4 + 0x118) = puVar10;
        puVar8 = puVar10;
      } while (lVar6 < *(int *)(param_4 + 0x108));
    }
    *(undefined4 *)(param_4 + 0x108) = 0;
  }
  return;
}

