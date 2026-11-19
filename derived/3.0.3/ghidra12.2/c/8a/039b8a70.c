
void FUN_039b8a70(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long local_880;
  byte *local_878;
  undefined *local_468;
  undefined1 *local_460;
  undefined4 local_458;
  undefined1 local_454 [1023];
  undefined1 local_55;
  
  *(long *)(param_3 + 0x48) = param_1;
  *(long *)(param_1 + 8) = param_3;
  iVar2 = 0;
  do {
    puVar11 = (undefined8 *)(param_1 + 0x10 + (long)iVar2 * 0x38);
    *(char *)((long)puVar11 + 0x31) = (char)iVar2;
    *(char *)((long)puVar11 + 0x32) = (char)iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(puVar11 + 6) = 0;
    *puVar11 = 0;
    puVar11[3] = param_1 + 0xe18;
    puVar11[4] = 0;
    *(undefined4 *)((long)puVar11 + 0x34) = 0;
    puVar11[5] = 0;
    *(undefined1 *)((long)puVar11 + 0x33) = 0xff;
    lVar5 = DAT_05ae9370;
  } while (iVar2 != 0x40);
  lVar4 = *(long *)(param_5 + 8) + *(long *)(param_5 + 0x10);
  uVar1 = lVar4 + 7U & 0xfffffffffffffff8;
  *(ulong *)(param_5 + 0x10) = ((*(long *)(param_5 + 0x10) + DAT_05ae9370) - lVar4) + uVar1;
  FUN_0034f054(param_1 + 4000,uVar1,lVar5);
  lVar4 = *(long *)(param_1 + 8);
  *(short *)(param_1 + 0xe1a) = (short)lVar5;
  *(undefined2 *)(param_1 + 0x110c) = 0;
  uVar1 = (ulong)*(byte *)(lVar4 + 0x5b);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    lVar4 = *(long *)(param_5 + 8) + *(long *)(param_5 + 0x10);
    uVar6 = lVar4 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_5 + 0x10) = ((*(long *)(param_5 + 0x10) + uVar1 * 0x260) - lVar4) + uVar6;
    do {
      puVar11 = (undefined8 *)(uVar6 + lVar5);
      lVar5 = lVar5 + 0x260;
      puVar11[0x49] = 0x200;
      puVar11[0x4a] = 0;
      puVar11[6] = 0;
      puVar11[7] = puVar11 + 8;
      *(undefined1 *)(puVar11 + 0x4b) = 0;
      *puVar11 = &PTR_LAB_04b65c30;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = "untitled";
    } while (uVar1 * 0x260 != lVar5);
    lVar4 = *(long *)(param_1 + 8);
  }
  *(ulong *)(param_1 + 0xe10) = uVar6;
  if (*(char *)(lVar4 + 0x5b) != '\0') {
    uVar1 = 0;
    lVar5 = 0x28;
    do {
      uVar1 = uVar1 + 1;
      *(long *)(*(long *)(param_1 + 0xe10) + lVar5) = *(long *)(lVar4 + 8) + 2;
      lVar5 = lVar5 + 0x260;
      lVar4 = *(long *)(param_1 + 8);
    } while (uVar1 < *(byte *)(lVar4 + 0x5b));
  }
  FUN_006e9454(&local_880,"%s/%s/%s",*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x20) + 0x20) + 2,
               *(long *)(*(long *)(param_2 + 0x10) + 8) + 2,*(long *)(param_3 + 8) + 2);
  (**(code **)(local_880 + 0x18))(&local_880);
  uVar7 = (uint)*local_878;
  if (*local_878 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      local_878 = local_878 + 1;
      uVar3 = (uint)*(ushort *)(PTR_DAT_04bd0f10 + (ulong)(uVar7 ^ uVar3 & 0xff) * 2) ^ uVar3 >> 8;
      uVar7 = (uint)*local_878;
    } while (uVar7 != 0);
  }
  *(short *)(param_1 + 0x110e) = (short)uVar3;
  lVar5 = *(long *)(param_2 + 0x10);
  uVar7 = (uint)*(ushort *)(lVar5 + 0x6c);
  if (*(ushort *)(lVar5 + 0x6c) != 0) {
    uVar8 = (uint)*(ushort *)(lVar5 + 0x6a);
    uVar3 = 0;
    uVar10 = uVar8;
    uVar9 = uVar8;
    do {
      if (uVar8 != 0) {
        lVar4 = 0;
        uVar1 = 0;
        do {
          if (uVar3 == *(ushort *)(param_3 + 0x52)) {
            if (*(long *)(lVar5 + 0x28) + lVar4 == param_3) break;
            *(short *)(param_1 + 0x110a) = *(short *)(param_1 + 0x110a) + 1;
            uVar10 = (uint)*(ushort *)(lVar5 + 0x6a);
            uVar9 = uVar10;
          }
          uVar8 = uVar9;
          uVar1 = uVar1 + 1;
          lVar4 = lVar4 + 0x60;
          uVar9 = uVar8;
        } while (uVar1 < uVar10);
        uVar7 = (uint)*(ushort *)(lVar5 + 0x6c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar7);
  }
  if (param_6 != 0) {
    local_55 = 0;
    local_458 = 0x400;
    local_460 = local_454;
    local_454[0] = 0;
    local_468 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_468,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor4");
  }
  return;
}

