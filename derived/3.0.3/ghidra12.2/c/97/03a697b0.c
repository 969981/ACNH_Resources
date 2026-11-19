
void FUN_03a697b0(long param_1,uint param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  
  if (0 < (int)param_2) {
    __size = (ulong)param_2 * 0x3f8 + 8;
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      puVar8 = malloc(__size);
      puVar5 = PTR_DAT_04bd1178;
      puVar6 = PTR_DAT_04bd1198;
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar11 + 8);
        if (lVar7 != 0) {
          param_3 = (long *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*param_3;
        if (param_3 == (long *)0x0) goto LAB_03a699fc;
      }
      puVar8 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      puVar5 = PTR_DAT_04bd1178;
      puVar6 = PTR_DAT_04bd1198;
    }
    PTR_DAT_04bd1178 = puVar5;
    PTR_DAT_04bd1198 = puVar6;
    if (puVar8 != (ulong *)0x0) {
      puVar10 = puVar8 + 1;
      *puVar8 = (ulong)param_2;
      puVar1 = PTR_DAT_04bd11a0 + 0x10;
      puVar8 = puVar10;
      do {
        FUN_0390cee0(puVar8);
        FUN_0390cee0(puVar8 + 0x1c);
        puVar8[0x41] = 0;
        puVar8[0x3b] = 0;
        puVar8[0x3c] = (ulong)&DAT_3f8000003f800000;
        puVar8[0x42] = 0;
        puVar8[0x43] = 0;
        puVar8[0x44] = 0;
        puVar8[0x45] = 0;
        puVar8[0x47] = 0;
        puVar8[0x48] = 0;
        puVar8[0x49] = 0;
        puVar8[0x4a] = 0;
        puVar8[0x4b] = 0;
        puVar8[0x4c] = 0;
        puVar8[0x4d] = 0;
        puVar8[0x4e] = 0;
        puVar8[0x4f] = 0;
        puVar8[0x50] = 0;
        puVar8[0x58] = 0;
        puVar8[0x57] = 0;
        puVar8[0x56] = 0;
        puVar8[0x55] = 0;
        puVar8[0x54] = 0;
        puVar8[0x53] = 0;
        puVar8[0x52] = 0;
        puVar8[0x59] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar8 + 0x5a) = 0x10000;
        puVar8[0x39] = (ulong)(puVar5 + 0x10);
        puVar8[0x3a] = (ulong)&DAT_3f8000003f800000;
        *(undefined4 *)(puVar8 + 0x51) = 0xffffffff;
        puVar8[0x3d] = 0;
        puVar8[0x3e] = 0;
        puVar8[0x3f] = 0;
        puVar8[0x40] = 0;
        *(undefined4 *)(puVar8 + 0x5d) = 0xff;
        *(undefined4 *)((long)puVar8 + 0x2ec) = 0;
        puVar8[0x46] = (ulong)(puVar6 + 0x10);
        puVar8[0x5e] = 0x80000000000;
        puVar8[0x61] = 0;
        puVar8[0x60] = 0;
        puVar8[0x5f] = 0;
        puVar8[99] = 0;
        puVar8[100] = 0;
        puVar8[0x65] = 0;
        puVar8[0x66] = 0;
        puVar8[0x67] = 0;
        puVar8[0x68] = 0;
        puVar8[0x69] = 0;
        puVar8[0x6a] = 0;
        puVar8[0x6b] = 0;
        puVar8[0x6c] = 0;
        *(undefined4 *)(puVar8 + 0x6d) = 0xffffffff;
        puVar8[0x74] = 0;
        puVar8[0x73] = 0;
        puVar8[0x72] = 0;
        puVar8[0x71] = 0;
        puVar8[0x70] = 0;
        puVar8[0x6f] = 0;
        puVar8[0x6e] = 0;
        puVar8[0x75] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar8 + 0x76) = 0x10000;
        *(undefined4 *)(puVar8 + 0x79) = 0xff;
        *(undefined4 *)((long)puVar8 + 0x3cc) = 0;
        puVar8[0x62] = (ulong)puVar1;
        puVar8[0x7a] = 0x80000000000;
        puVar8[0x7d] = 0;
        puVar8[0x7c] = 0;
        puVar8[0x7b] = 0;
        (**(code **)PTR_DAT_04bcf220)(puVar8 + 0x77);
        puVar8 = puVar8 + 0x7f;
      } while (puVar8 != puVar10 + (ulong)param_2 * 0x7f);
      *(uint *)(param_1 + 0x1d0) = param_2;
      *(ulong **)(param_1 + 0x1d8) = puVar10;
      goto joined_r0x03a69a04;
    }
  }
LAB_03a699fc:
  param_2 = *(uint *)(param_1 + 0x1d0);
  puVar10 = *(ulong **)(param_1 + 0x1d8);
joined_r0x03a69a04:
  if (param_2 != 0) {
    uVar9 = 0;
    do {
      *(undefined2 *)((long)puVar10 + (long)(int)uVar9 * 0x3f8 + 0xc4) = 0;
      *(undefined1 *)((long)puVar10 + (long)(int)uVar9 * 0x3f8 + 0xc6) = 0;
      puVar2 = (uint *)((long)puVar10 + (long)(int)uVar9 * 0x3f8 + 0xd4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar10[(long)(int)uVar9 * 0x7f + 0x38] = 0;
      *(undefined2 *)(puVar10 + (long)(int)uVar9 * 0x7f + 0x7e) = 0;
      *(undefined4 *)((long)puVar10 + (long)(int)uVar9 * 0x3f8 + 0x3f4) = 0xffffffff;
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  return;
}

