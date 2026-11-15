
void FUN_01edf024(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  float local_54;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 1) {
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = FUN_02085a50(lVar7,1,0);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(lVar7 + 0x801) = 1;
      lVar1 = lVar7 + 0x10 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar7 + 0x294)) {
        lVar1 = lVar7 + 0x10;
      }
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    local_64 = 0;
    local_60 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    local_54 = (float)*(int *)(param_1 + 0x781c) * 5.0 + 2.5;
    local_5c = (ulong)(uint)((float)*(int *)(param_1 + 0x7818) * 5.0 + 2.5);
    FUN_01e5a930(0x40000000,lVar7,0x14,&local_5c,&local_60,&local_64,PTR_DAT_04bc1600,6);
    *(undefined2 *)(lVar7 + 0x408) = *(undefined2 *)(param_1 + 0x7840);
    *(undefined1 *)(lVar7 + 0x40a) = *(undefined1 *)(param_1 + 0x7842);
    *(undefined1 *)(lVar7 + 0x40b) = *(undefined1 *)(param_1 + 0x7843);
    *(undefined4 *)(lVar7 + 0x40c) = *(undefined4 *)(param_1 + 0x7844);
    *(undefined1 *)(param_1 + 0x7878) = 1;
    uVar8 = 2;
  }
  else {
    local_5c = 0;
    local_54 = 0.0;
    local_60 = 0;
    FUN_02201470(&local_5c,&local_60,param_1 + 0x7830,
                 *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,param_1 + 0x7868);
    if ((((float)local_5c == 0.0) && (local_5c._4_4_ == 0.0)) && (local_54 == 0.0)) {
      *(undefined4 *)(param_1 + 0xae5c) = 0x96;
      uVar8 = 3;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar8 = *(undefined4 *)(param_1 + 0x7830);
      fVar10 = *(float *)(param_1 + 0x7834);
      uVar9 = *(undefined4 *)(param_1 + 0x7838);
      uVar6 = FUN_02085a50(lVar7,3,0);
      if ((uVar6 & 1) != 0) {
        lVar1 = lVar7 + 0x10;
        *(undefined1 *)(lVar7 + 0x801) = 1;
        lVar2 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar7 + 0x294)) {
          lVar2 = lVar1;
        }
        *(undefined4 *)(lVar2 + 0x14) = uVar9;
        *(undefined4 *)(lVar2 + 0xc) = uVar8;
        *(float *)(lVar2 + 0x10) = fVar10 + 5.0;
        lVar2 = lVar1 + (ulong)*(uint *)(lVar7 + 0x294) * 0x80;
        if (4 < *(uint *)(lVar7 + 0x294)) {
          lVar2 = lVar1;
        }
        *(undefined1 *)(lVar2 + 0x7e) = 1;
      }
      *(undefined4 *)(param_1 + 0x787c) = local_60;
      cVar5 = *(char *)(param_1 + 0x789c);
      FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
      *(undefined4 *)(param_1 + 0xa9fc) = 0;
      puVar3 = (undefined8 *)(param_1 + 0xaa24);
      if (cVar5 != '\0') {
        puVar3 = (undefined8 *)(param_1 + 0x7848);
      }
      uVar8 = 0;
      uVar9 = *(undefined4 *)(puVar3 + 2);
      *(float *)(param_1 + 0xa9f8) = local_54;
      *(undefined4 *)(param_1 + 0xaa14) = uVar9;
      *(ulong *)(param_1 + 0xa9f0) = local_5c;
      uVar4 = puVar3[1];
      *(undefined8 *)(param_1 + 0xaa04) = *puVar3;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar4;
      *(undefined4 *)(param_1 + 0xaa18) = *(undefined4 *)((long)puVar3 + 0x14);
      *(undefined4 *)(param_1 + 0xaa1c) = *(undefined4 *)(puVar3 + 3);
      uVar9 = *(undefined4 *)((long)puVar3 + 0x1c);
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 1;
      *(undefined4 *)(param_1 + 0xaa20) = uVar9;
    }
  }
  *(undefined4 *)(param_1 + 0xae74) = uVar8;
  return;
}

