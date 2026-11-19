
void FUN_03c52d40(long param_1)

{
  UserHandle *pUVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  long lVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  Uid *pUVar16;
  undefined1 *__dest;
  ushort *puVar17;
  ushort *puVar18;
  char **ppcVar19;
  char *local_d0 [16];
  bool local_38 [4];
  int local_34;
  
  ppcVar19 = local_d0;
  FUN_038e18e4();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_038e3114(param_1 + 0x48,0,0x7fff);
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_038e3114(param_1 + 0x98,0,0x7fff);
  pUVar16 = (Uid *)(param_1 + 0xf8);
  *(undefined8 *)pUVar16 = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x120) = &DAT_04b81040;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  puVar10 = (undefined4 *)(param_1 + 0x134);
  *(undefined1 *)puVar10 = 0;
  puVar7 = PTR_DAT_04bc1428;
  *(undefined4 *)(param_1 + 0x130) = 0x21;
  *(undefined4 *)(param_1 + 0x168) = 0x21;
  *(undefined4 **)(param_1 + 0x128) = puVar10;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(long *)(param_1 + 0x158) = (long)(puVar7 + 0x10);
  puVar11 = (undefined2 *)(param_1 + 0x16c);
  *puVar11 = 0;
  *(undefined2 **)(param_1 + 0x160) = puVar11;
  if (puVar10 != (undefined4 *)&DAT_0406f9b4) {
    *(undefined1 *)(param_1 + 0x139) = 0;
    *(undefined1 *)(param_1 + 0x138) = 0x79;
    *puVar10 = 0x6d6d7544;
  }
  lVar12 = 0;
  *(undefined2 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  lVar15 = 0;
  while (lVar14 = lVar15, lVar12 != 0x7fffffff) {
    pbVar2 = (byte *)((long)puVar10 + lVar12);
    bVar6 = *pbVar2;
    uVar13 = (ushort)bVar6;
    if (bVar6 == 0) break;
    if ((char)bVar6 < '\0') {
      uVar13 = (ushort)bVar6;
      if ((uVar13 & 0xe0) == 0xc0) {
        if (pbVar2[1] == 0) break;
        uVar13 = pbVar2[1] & 0x3f | (uVar13 & 0x1f) << 6;
        lVar15 = 2;
      }
      else {
        if ((((uVar13 & 0xf0) != 0xe0) || (pbVar2[1] == 0)) || (pbVar2[2] == 0)) break;
        uVar13 = (ushort)bVar6 << 0xc | (pbVar2[1] & 0x3f) << 6 | pbVar2[2] & 0x3f;
        lVar15 = 3;
      }
    }
    else {
      lVar15 = 1;
    }
    *(ushort *)((long)puVar11 + lVar14) = uVar13;
    lVar12 = lVar15 + lVar12;
    lVar15 = lVar14 + 2;
    if (lVar14 + 2 == 0x42) break;
  }
  *(undefined2 *)((long)puVar11 + lVar14) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  nn::account::Initialize();
  uVar8 = (**(code **)(*DAT_05aed938 + 0x10))();
  if ((uVar8 & 1) != 0) {
    local_d0[0] = PTR_DAT_04bb2020 + 0x10;
    local_d0[1] = "AccountAutoSelectForHBMBootByVSI";
    pcVar9 = (char *)FUN_038b0130(*(undefined8 *)PTR_DAT_04bb2668,local_d0,1);
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
      nn::account::TryOpenPreselectedUser((UserHandle *)(param_1 + 0x108));
    }
    else {
      local_34 = 0;
      nn::account::ListAllUsers(&local_34,(Uid *)local_d0,8);
      if (0 < local_34) {
        lVar12 = 0;
        pUVar1 = (UserHandle *)(param_1 + 0x108);
        do {
          uVar4 = ppcVar19[1];
          *(char **)pUVar16 = *ppcVar19;
          *(undefined8 *)(param_1 + 0x100) = uVar4;
          nn::account::OpenUser(pUVar1,pUVar16);
          local_38[0] = false;
          nn::account::IsNetworkServiceAccountAvailable(local_38,pUVar1);
          nn::account::CloseUser(pUVar1);
          if (local_38[0] != false) break;
          lVar12 = lVar12 + 1;
          ppcVar19 = ppcVar19 + 2;
        } while (lVar12 < local_34);
      }
      nn::account::OpenUser((UserHandle *)(param_1 + 0x108),pUVar16);
    }
    nn::account::GetUserId(pUVar16,(UserHandle *)(param_1 + 0x108));
    nn::account::GetNickname((Nickname *)local_d0,pUVar16);
    __dest = *(undefined1 **)(param_1 + 0x128);
    if ((char **)__dest != local_d0) {
      iVar3 = 0x20;
      if (*(int *)(param_1 + 0x130) < 0x21) {
        iVar3 = *(int *)(param_1 + 0x130) + -1;
      }
      memcpy(__dest,local_d0,(long)iVar3);
      __dest[iVar3] = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x158) + 0x18))((long *)(param_1 + 0x158));
    puVar17 = *(ushort **)(param_1 + 0x160);
    uVar5 = *(uint *)(param_1 + 0x168);
    uVar8 = (ulong)uVar5;
    (**(code **)(*(long *)(param_1 + 0x120) + 0x18))((undefined8 *)(param_1 + 0x120));
    if (uVar5 != 0) {
      lVar15 = *(long *)(param_1 + 0x128);
      lVar12 = 0;
      while (puVar18 = puVar17, lVar12 != 0x7fffffff) {
        pbVar2 = (byte *)(lVar15 + lVar12);
        bVar6 = *pbVar2;
        uVar13 = (ushort)bVar6;
        if (bVar6 == 0) break;
        if ((char)bVar6 < '\0') {
          uVar13 = (ushort)bVar6;
          if ((uVar13 & 0xe0) == 0xc0) {
            if (pbVar2[1] == 0) break;
            uVar13 = pbVar2[1] & 0x3f | (uVar13 & 0x1f) << 6;
            lVar14 = 2;
          }
          else {
            if ((((uVar13 & 0xf0) != 0xe0) || (pbVar2[1] == 0)) || (pbVar2[2] == 0)) break;
            uVar13 = (ushort)bVar6 << 0xc | (pbVar2[1] & 0x3f) << 6 | pbVar2[2] & 0x3f;
            lVar14 = 3;
          }
        }
        else {
          lVar14 = 1;
        }
        lVar12 = lVar14 + lVar12;
        uVar8 = uVar8 - 1;
        *puVar18 = uVar13;
        puVar17 = puVar18 + 1;
        if (uVar8 == 0) break;
      }
      *puVar18 = 0;
    }
  }
  return;
}

