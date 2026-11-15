
void FUN_01ff7f80(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char *__src;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_38;
  
  *(int *)(param_1 + 0xaf90) = param_2;
  puVar5 = PTR_DAT_04bb39d8;
  if (param_2 != 2) {
    if (param_2 != 1) {
      if (param_2 != 0) {
        return;
      }
      iVar10 = *(int *)(param_1 + 0xaf9c);
      if (iVar10 < 0) {
        puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar1 = *puVar8 ^ *puVar8 << 0xb;
        uVar2 = puVar8[3];
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        puVar8[2] = uVar2;
        puVar8[3] = uVar1;
        iVar10 = (int)((float)DAT_053ba4cc +
                      ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) *
                      (float)(DAT_053ba4d0 - DAT_053ba4cc));
      }
      *(int *)(param_1 + 0xaf9c) = iVar10;
      puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
      uVar2 = puVar8[3];
      local_38 = (ulong)(uint)local_38;
      uVar1 = *puVar8 ^ *puVar8 << 0xb;
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      puVar8[2] = uVar2;
      puVar8[3] = uVar1;
      *(int *)(param_1 + 0xaf98) =
           (int)((float)DAT_053ba4c4 +
                ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * (float)(DAT_053ba4c8 - DAT_053ba4c4));
      FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_50,
                   (long)&local_38 + 4,PTR_DAT_04bc1600,10);
      return;
    }
    lVar16 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    if (*(undefined1 **)(lVar16 + 1000) == &DAT_040ee9d7) {
LAB_01ff8230:
      puVar9 = (undefined8 *)FUN_01e57b44(*(undefined8 *)(param_1 + 0x10));
      local_50 = (undefined *)*puVar9;
      uVar14 = FUN_0277d7b4(&local_50,param_1 + 0xaf88);
      lVar16 = *(long *)(param_1 + 0x10);
      if ((uVar14 & 1) == 0) {
        local_38 = 0;
        FUN_01e5a930(0x40000000,lVar16,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                     PTR_DAT_04bc1600,6);
        pcVar15 = *(char **)(lVar16 + 0x3b8);
        if (pcVar15 == "NpcSpCheersDemoEat") goto LAB_01ff83c8;
        iVar3 = *(int *)(lVar16 + 0x3c0);
        __src = "NpcSpCheersDemoEat";
        bVar7 = SBORROW4(iVar3,0x12);
        iVar10 = iVar3 + -0x12;
        bVar6 = iVar3 == 0x12;
        iVar11 = 0x12;
      }
      else {
        local_38 = 0;
        FUN_01e5a930(0x40000000,lVar16,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                     PTR_DAT_04bc1600,6);
        pcVar15 = *(char **)(lVar16 + 0x3b8);
        if (pcVar15 == "NpcSpCheersDemoDrink") goto LAB_01ff83c8;
        iVar3 = *(int *)(lVar16 + 0x3c0);
        __src = "NpcSpCheersDemoDrink";
        bVar7 = SBORROW4(iVar3,0x14);
        iVar10 = iVar3 + -0x14;
        bVar6 = iVar3 == 0x14;
        iVar11 = 0x14;
      }
      if (bVar6 || iVar10 < 0 != bVar7) {
        iVar11 = iVar3 + -1;
      }
      memcpy(pcVar15,__src,(long)iVar11);
      pcVar15[iVar11] = '\0';
    }
    else {
      uVar14 = 0;
      bVar6 = true;
      do {
        cVar4 = (*(undefined1 **)(lVar16 + 1000))[uVar14];
        if (cVar4 != (&DAT_040ee9d7)[uVar14]) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_01ff8230;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
      lVar16 = *(long *)(param_1 + 0x10);
      local_38 = (ulong)(uint)local_38;
      FUN_01e5a930(0x40000000,lVar16,0xd,PTR_DAT_04bb2150,&local_50,(long)&local_38 + 4,
                   PTR_DAT_04bc1600,6);
      pcVar15 = *(char **)(lVar16 + 0x3b8);
      if (pcVar15 != "NpcSpCheersDemoDrink") {
        iVar10 = 0x14;
        if (*(int *)(lVar16 + 0x3c0) < 0x15) {
          iVar10 = *(int *)(lVar16 + 0x3c0) + -1;
        }
        memcpy(pcVar15,"NpcSpCheersDemoDrink",(long)iVar10);
        pcVar15[iVar10] = '\0';
      }
    }
LAB_01ff83c8:
    *(undefined4 *)(lVar16 + 0x3a0) = 0;
    *(undefined1 *)(lVar16 + 0x410) = 0;
    return;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "SeqParty3Done";
  iVar10 = FUN_02758850(&local_50);
  lVar16 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xaf94) = 0x5a;
  (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
  (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
  puVar13 = *(undefined1 **)(lVar16 + 1000);
  if (iVar10 == 0) {
    if (puVar13 == &DAT_040a033e) {
LAB_01ff8684:
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      lVar16 = *(long *)(param_1 + 0x10);
      local_38 = (ulong)(uint)local_38;
      FUN_01e5a930(0x40000000,lVar16,0xc,PTR_DAT_04bb2150,&local_50,(long)&local_38 + 4,
                   PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar16 + 0x3ac) = 1;
      return;
    }
    uVar14 = 0;
    bVar6 = true;
    do {
      if (puVar13[uVar14] != (&DAT_040a033e)[uVar14]) break;
      if (puVar13[uVar14] == '\0') {
        if (bVar6) goto LAB_01ff8684;
        break;
      }
      bVar6 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    lVar16 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    if (*(undefined1 **)(lVar16 + 1000) != &DAT_0409b647) {
      uVar14 = 0;
      bVar6 = true;
      do {
        cVar4 = (*(undefined1 **)(lVar16 + 1000))[uVar14];
        if (cVar4 != (&DAT_0409b647)[uVar14]) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_01ff85a0;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      lVar16 = *(long *)(param_1 + 8);
      (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
      (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
      return;
    }
LAB_01ff85a0:
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar16 + 0x370) + 8) == 3) {
LAB_01ff85bc:
      uVar12 = 1;
      goto LAB_01ff8618;
    }
    lVar16 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar16 + 0x288);
    *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
    uVar2 = *(uint *)(lVar16 + 0x294);
    *(uint *)(lVar16 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar16 + 0x294) = uVar1;
    bVar6 = 0x1d < (uint)((ulong)uVar1 * 100 >> 0x20);
  }
  else {
    if (puVar13 == &DAT_040a033e) goto LAB_01ff85a0;
    uVar14 = 0;
    bVar6 = true;
    do {
      if (puVar13[uVar14] != (&DAT_040a033e)[uVar14]) break;
      if (puVar13[uVar14] == '\0') {
        if (bVar6) goto LAB_01ff85a0;
        break;
      }
      bVar6 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    lVar16 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
    if (*(undefined1 **)(lVar16 + 1000) != &DAT_0409b647) {
      uVar14 = 0;
      bVar6 = true;
      do {
        cVar4 = (*(undefined1 **)(lVar16 + 1000))[uVar14];
        if (cVar4 != (&DAT_0409b647)[uVar14]) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_01ff84c4;
          break;
        }
        bVar6 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      lVar16 = *(long *)(param_1 + 8);
      (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
      (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
      if (*(undefined1 **)(lVar16 + 1000) != &DAT_040ee9d7) {
        uVar14 = 0;
        bVar6 = true;
        while( true ) {
          cVar4 = (*(undefined1 **)(lVar16 + 1000))[uVar14];
          if (cVar4 != (&DAT_040ee9d7)[uVar14]) {
            return;
          }
          if (cVar4 == '\0') break;
          bVar6 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
          if (uVar14 == 0x80001) {
            return;
          }
        }
        if (!bVar6) {
          return;
        }
      }
      goto LAB_01ff8684;
    }
LAB_01ff84c4:
    lVar16 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar16 + 0x370) + 8) == 3) goto LAB_01ff85bc;
    lVar16 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar16 + 0x288);
    *(undefined4 *)(lVar16 + 0x288) = *(undefined4 *)(lVar16 + 0x28c);
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *(undefined4 *)(lVar16 + 0x28c) = *(undefined4 *)(lVar16 + 0x290);
    uVar2 = *(uint *)(lVar16 + 0x294);
    *(uint *)(lVar16 + 0x290) = uVar2;
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    *(uint *)(lVar16 + 0x294) = uVar1;
    bVar6 = 0x3b < (uint)((ulong)uVar1 * 100 >> 0x20);
  }
  lVar16 = *(long *)(param_1 + 0x10);
  uVar12 = 3;
  if (bVar6) {
    uVar12 = 1;
  }
LAB_01ff8618:
  local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
  local_38 = (ulong)(uint)local_38;
  FUN_01e5a930(0x40000000,lVar16,0xc,PTR_DAT_04bb2150,&local_50,(long)&local_38 + 4,PTR_DAT_04bc1600
               ,6);
  *(undefined4 *)(lVar16 + 0x3ac) = uVar12;
  return;
}

