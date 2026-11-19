
void FUN_03c3deb0(uint *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong __size;
  uint *puVar11;
  undefined *local_88;
  char *pcStack_80;
  undefined1 auStack_78 [4];
  uint local_74;
  uint local_64 [2];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_34;
  
  *param_1 = 0;
  puVar2 = PTR_DAT_04bb2660;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0x100;
  puVar1 = PTR_DAT_04bb21f8;
  param_1[0x4c] = 0x1000;
  param_1[0x4d] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0xffffffff;
  lVar10 = *(long *)puVar2;
  *(undefined1 *)((long)param_1 + 299) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 1;
  *(undefined2 *)(param_1 + 0x55) = 0;
  puVar11 = param_1 + 4;
  puVar11[0] = 0;
  puVar11[1] = 0;
  *(undefined **)(param_1 + 6) = puVar1 + 0x10;
  *(uint **)(param_1 + 8) = param_1 + 0xb;
  uVar9 = *(undefined8 *)(lVar10 + 0x338);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x4e) = uVar9;
  *(undefined ***)(param_1 + 0x5e) = &PTR_LAB_04b7f168;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  puVar3 = PTR_DAT_04bb3518;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined ***)(param_1 + 0x62) = &PTR_LAB_04b7f188;
  param_1[100] = 0;
  param_1[0x65] = 0;
  uVar9 = *(undefined8 *)(*(long *)puVar3 + 0x108);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "SceneLoadInCalc";
  FUN_03c53c60(auStack_78,&local_88);
  local_64[0] = local_74;
  local_34 = 1 << (ulong)(local_74 & 0x1f);
  FUN_03c53c60(local_64,&local_88);
  uVar4 = FUN_03c54ed0(uVar9,&local_88,local_54,local_64[0],local_5c,&local_34,uStack_58,0);
  param_1[0x5c] = uVar4;
  *(uint **)(param_1 + 100) = param_1;
  *(undefined1 **)(param_1 + 0x66) = &LAB_03c3e108;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(uint **)(param_1 + 0x6a) = puVar11;
  if (0 < (int)param_2) {
    __size = (ulong)param_2 * 0x150 | 8;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      puVar7 = malloc(__size);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar10 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_03c3e0dc;
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (puVar7 != (ulong *)0x0) {
      puVar8 = puVar7 + 1;
      *puVar7 = (ulong)param_2;
      puVar7 = puVar8;
      do {
        *(undefined4 *)(puVar7 + 3) = 0x100;
        *(undefined1 *)((long)puVar7 + 0x11b) = 0;
        *(undefined1 *)((long)puVar7 + 0x1c) = 0;
        *puVar7 = 0;
        puVar7[0x24] = 0x1000;
        puVar7[0x26] = 0;
        *(undefined2 *)(puVar7 + 0x27) = 1;
        *(undefined8 *)((long)puVar7 + 0x13c) = 0xffffffff00000000;
        *(undefined2 *)((long)puVar7 + 0x144) = 0;
        puVar7[1] = (ulong)(puVar1 + 0x10);
        puVar7[2] = (ulong)((long)puVar7 + 0x1c);
        puVar7[0x25] = *(ulong *)(*(long *)puVar2 + 0x338);
        puVar7 = puVar7 + 0x2a;
      } while (puVar7 != puVar8 + (ulong)param_2 * 0x2a);
      *param_1 = param_2;
      *(ulong **)(param_1 + 2) = puVar8;
    }
  }
LAB_03c3e0dc:
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  return;
}

