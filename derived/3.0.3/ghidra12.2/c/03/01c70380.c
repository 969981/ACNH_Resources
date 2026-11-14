
void FUN_01c70380(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  bool bVar10;
  uint *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 local_38;
  
  puVar9 = PTR_DAT_04bb39d8;
  uVar16 = 0;
  do {
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
    uVar5 = puVar11[3];
    uVar3 = *puVar11 ^ *puVar11 << 0xb;
    uVar4 = puVar11[1] ^ puVar11[1] << 0xb;
    *puVar11 = puVar11[2];
    puVar11[1] = uVar5;
    uVar3 = uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5;
    uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    local_38 = CONCAT44(uVar3,uVar4);
    iVar15 = 0xd4 - (int)uVar16;
    if (7 < iVar15) {
      iVar15 = 8;
    }
    memcpy((void *)(param_1 + (uVar16 & 0xffffffff)),&local_38,(long)iVar15);
    uVar16 = (uVar16 & 0xffffffff) + 8;
  } while ((uint)uVar16 < 0xd4);
  uVar3 = param_2[2];
  *(char *)(param_1 + 8) = (char)uVar3;
  if ((uVar3 & 0xff) != 0) {
    uVar16 = 0;
    puVar13 = (undefined4 *)(param_1 + 0x28);
    do {
      bVar10 = 9 < uVar16;
      puVar2 = (undefined1 *)(param_1 + 10) + uVar16;
      if (bVar10) {
        puVar2 = (undefined1 *)(param_1 + 10);
      }
      puVar14 = *(undefined4 **)(*(long *)(param_2 + 4) + uVar16 * 8);
      uVar16 = uVar16 + 1;
      *puVar2 = (char)puVar14[2];
      puVar1 = puVar13;
      if (bVar10) {
        puVar1 = (undefined4 *)(param_1 + 0x28);
      }
      puVar13 = puVar13 + 2;
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
    } while (uVar16 < *(byte *)(param_1 + 8));
  }
  uVar3 = param_2[0x46];
  *(char *)(param_1 + 9) = (char)uVar3;
  if ((uVar3 & 0xff) != 0) {
    lVar12 = 0;
    uVar16 = 0;
    puVar13 = (undefined4 *)(param_1 + 0x78);
    do {
      bVar10 = 9 < uVar16;
      lVar7 = uVar16 - 100;
      lVar8 = uVar16 - 0x5a;
      uVar16 = uVar16 + 1;
      puVar2 = (undefined1 *)((long)puVar13 + lVar8);
      puVar6 = (undefined1 *)((long)puVar13 + lVar7);
      if (bVar10) {
        puVar2 = (undefined1 *)(param_1 + 0x1e);
        puVar6 = (undefined1 *)(param_1 + 0x14);
      }
      puVar14 = *(undefined4 **)(*(long *)(param_2 + 0x48) + lVar12);
      *puVar6 = (char)puVar14[2];
      *puVar2 = (char)puVar14[3];
      puVar1 = (undefined4 *)((long)puVar13 + lVar12);
      lVar12 = lVar12 + 8;
      if (bVar10) {
        puVar1 = puVar13;
      }
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
    } while (uVar16 < *(byte *)(param_1 + 9));
  }
  *(undefined4 *)(param_1 + 200) = *param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_2[1];
  return;
}

