
void FUN_03658730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *__s;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_17c [63];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0x43c) = 0;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined1 *)((long)param_1 + 0x21b4) = 1;
  param_1[0x437] = 0x3f00000006;
  param_1[2] = param_6;
  param_1[3] = param_7;
  __s = (void *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))(*(long **)PTR_DAT_04bdf328,0x80,0)
  ;
  param_1[0x43a] = __s;
  if (__s == (void *)0x0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    __s = (void *)param_1[0x43a];
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x439) = 0;
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x437) != 0) {
    uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0x437) & 0x1f);
  }
  memset(__s,0,(ulong)uVar2 << 1);
  *(undefined1 *)((long)param_1 + 0x21c4) = 1;
  param_1[0x43b] = 0x7fdb00000000;
  FUN_03ffbf40(0x469ac15f,param_1 + 0x4b0,0x6d3d34000000,0x5dc000000000);
  fVar13 = 0.0;
  lVar9 = 0;
  do {
    fVar12 = (float)(int)lVar9 + -31.0;
    fVar10 = (float)FUN_03ffb8f0(fVar12 * 0.1013417);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if (-31.0 <= fVar12) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar12)) {
        bVar4 = fVar12 < 31.0;
        bVar5 = fVar12 == 31.0;
        bVar6 = false;
      }
    }
    fVar11 = 0.0;
    if ((bVar5 || bVar4 != bVar6) &&
       (fVar12 = fVar12 * 0.5006258 * 3.1415927, fVar11 = fVar10, fVar12 != 0.0)) {
      fVar11 = sinf(fVar12);
      fVar11 = fVar10 * (fVar11 / fVar12);
    }
    fVar13 = fVar13 + fVar11;
    local_17c[lVar9] = fVar11;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x3f);
  for (lVar9 = 0; *(float *)((long)local_17c + lVar9) = *(float *)((long)local_17c + lVar9) / fVar13
      , lVar9 != 0xf8; lVar9 = lVar9 + 8) {
    *(float *)((long)local_17c + lVar9 + 4) = *(float *)((long)local_17c + lVar9 + 4) / fVar13;
  }
  *(undefined4 *)(param_1 + 0x46e) = 0;
  for (lVar9 = 0;
      *(int *)((long)param_1 + lVar9 + 0x2374) =
           (int)(*(float *)((long)local_17c + lVar9) * 32768.0), lVar9 != 0xf8; lVar9 = lVar9 + 8) {
    *(int *)((long)param_1 + lVar9 + 0x2378) =
         (int)(*(float *)((long)local_17c + lVar9 + 4) * 32768.0);
  }
  lVar9 = 0;
  puVar7 = (undefined4 *)((long)param_1 + 0x2374);
  do {
    puVar1 = (undefined2 *)((long)param_1 + lVar9 + 0x2270);
    lVar9 = lVar9 + 4;
    *puVar1 = (short)puVar7[-1];
    puVar1[1] = (short)*puVar7;
    puVar7 = puVar7 + 2;
  } while (lVar9 != 0x80);
  lVar9 = 0;
  puVar8 = param_1 + 0x48e;
  do {
    puVar1 = (undefined2 *)((long)param_1 + lVar9 + 0x22f0);
    lVar9 = lVar9 + 2;
    *puVar1 = puVar1[-0x40];
    *(undefined4 *)puVar8 = *(undefined4 *)(puVar8 + -0x20);
    puVar8 = (undefined8 *)((long)puVar8 + 4);
  } while (lVar9 != 0x80);
  param_1[0x406] = 0;
  *(undefined2 *)((long)param_1 + 0x21a4) = 0;
  *(undefined4 *)(param_1 + 0x435) = 0xffffffff;
  memset(param_1 + 0x407,0,0x150);
  *(undefined4 *)(param_1 + 0x431) = 0;
  param_1[0x42a] = 0x10000c000;
  *(undefined4 *)(param_1 + 0x42f) = 8;
  *(undefined8 *)((long)param_1 + 0x218c) = 0x800000000000;
  *(undefined4 *)(param_1 + 0x42e) = 0x1ac;
  *(undefined4 *)(param_1 + 0x428) = 1;
  *(undefined8 *)((long)param_1 + 0x2194) = 0x746c000006b000;
  *(undefined4 *)((long)param_1 + 0x203c) = 0x1d25;
  *(undefined1 *)((long)param_1 + 0x2164) = 1;
  *(undefined1 *)(param_1 + 0x430) = 1;
  *(undefined4 *)(param_1 + 0x434) = 0;
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x437) != 0) {
    uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0x437) & 0x1f);
  }
  *(undefined1 *)((long)param_1 + 0x21ac) = 0;
  *(undefined4 *)(param_1 + 0x436) = 1;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x439) = 0;
  memset((void *)param_1[0x43a],0,(ulong)uVar2 << 1);
  *(undefined1 *)((long)param_1 + 0x21c4) = 1;
  *(undefined4 *)(param_1 + 0x4ae) = 0;
  param_1[0x43e] = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  iVar3 = 0;
  if (*(int *)((long)param_1 + 0x21dc) != 0) {
    iVar3 = -0x2eea0000 / *(int *)((long)param_1 + 0x21dc);
  }
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  param_1[0x443] = 0;
  param_1[0x444] = 0;
  param_1[0x445] = 0;
  param_1[0x446] = 0;
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  param_1[0x44a] = 0;
  param_1[1099] = 0;
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  *(undefined1 *)((long)param_1 + 0x2574) = 1;
  param_1[0x4b0] = 0;
  *(undefined4 *)(param_1 + 0x4b2) = 0;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  *(int *)(param_1 + 0x43b) = iVar3 << 0xf;
  memset(param_1 + 6,0,0x2000);
  return;
}

