
void FUN_0396ad68(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_920;
  undefined8 local_918;
  undefined1 auStack_508 [8];
  float local_500;
  undefined1 local_4fc [4];
  undefined *local_4f8;
  long local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 *local_498;
  int local_490;
  undefined1 local_48c;
  undefined8 local_488;
  undefined1 auStack_480 [1024];
  undefined1 local_28 [4];
  undefined1 auStack_24 [4];
  
  if ((*(ushort *)(param_1 + 0x88) >> 0xd & 1) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  lVar6 = *(long *)(param_2 + 0x40);
  FUN_038e77e4(lVar6,uVar8,*(undefined8 *)(param_2 + 0x10));
  fVar9 = *(float *)(lVar6 + 0x14);
  fVar11 = *(float *)(lVar6 + 0xc);
  fVar19 = *(float *)(lVar6 + 0x10) - *(float *)(lVar6 + 8);
  fVar21 = (fVar19 * 0.9) /
           (*(float *)(*(long *)(param_2 + 0x20) + 0x38) -
           *(float *)(*(long *)(param_2 + 0x20) + 0x30));
  FUN_038e4d90(&DAT_05ae7800,uVar8);
  local_4e8 = 0;
  local_4e0 = 0;
  local_4a0 = 0x7f800000;
  local_48c = 1;
  local_4b0 = 0;
  local_4a8 = 0;
  local_498 = (undefined1 *)0x0;
  local_490 = 0;
  local_4f8 = PTR_DAT_04bd0f00 + 0x10;
  local_4d8 = *(long *)PTR_DAT_04bd0c58;
  if (*(long *)PTR_DAT_04bd0ef8 != 0) {
    local_4d8 = *(long *)PTR_DAT_04bd0ef8;
  }
  local_4c0 = &DAT_3f8000003f800000;
  local_4b8 = &DAT_3f8000003f800000;
  fVar10 = *(float *)(*(long *)(param_2 + 0x20) + 0x3c);
  fVar25 = *(float *)(*(long *)(param_2 + 0x20) + 0x34);
  fVar23 = *(float *)(lVar6 + 0x14);
  fVar12 = *(float *)(lVar6 + 0xc);
  local_4d0 = (float)(int)(fVar19 * 0.1);
  local_4cc = (float)(int)((fVar9 - fVar11) * 0.48);
  if (((*(ushort *)(param_1 + 0x8a) & 0x21) == 0) || ((*(ushort *)(param_1 + 0x8a) >> 1 & 1) == 0))
  {
    puVar7 = &DAT_05ae9148;
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x78);
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x1f8);
    puVar7 = &DAT_05ae9148;
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x78);
    }
    if (lVar5 != 0) {
      puVar3 = *(undefined8 **)(lVar5 + 0x100);
      puVar7 = (undefined8 *)(lVar5 + 8);
      goto LAB_0396af2c;
    }
  }
  puVar3 = &DAT_05ae91b0;
  if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x80);
  }
LAB_0396af2c:
  fVar9 = *(float *)(puVar7 + 3);
  fVar11 = *(float *)((long)puVar7 + 0x1c);
  fVar14 = *(float *)(puVar7 + 1);
  fVar15 = *(float *)((long)puVar7 + 0xc);
  fVar13 = *(float *)(puVar7 + 4);
  fVar19 = *(float *)((long)puVar7 + 0x24);
  fVar18 = *(float *)(puVar7 + 2);
  fVar16 = *(float *)((long)puVar7 + 0x14);
  fVar20 = *(float *)(puVar7 + 5);
  fVar26 = *(float *)((long)puVar7 + 0x2c);
  fVar24 = *(float *)(puVar7 + 6);
  fVar22 = *(float *)((long)puVar7 + 0x34);
  local_4f0 = lVar6;
  local_4c8 = fVar21;
  local_4c4 = fVar21;
  local_488 = uVar8;
  FUN_039864dc(puVar3,auStack_24,local_28,local_4fc,&local_500,auStack_508);
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  fVar15 = (-(fVar11 * fVar19) - fVar16 * fVar15) - fVar22 * fVar26;
  fVar13 = (-(fVar13 * fVar19) - fVar16 * fVar18) - fVar22 * fVar24;
  fVar14 = (-(fVar9 * fVar19) - fVar16 * fVar14) - fVar22 * fVar20;
  uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb6200);
  fVar9 = fVar13;
  fVar11 = fVar15;
  fVar19 = fVar14;
  if ((uVar4 & 1) != 0) {
    fVar11 = *(float *)(puVar7 + 9);
    fVar9 = *(float *)((long)puVar7 + 0x4c);
    fVar19 = *(float *)((long)puVar7 + 0x44);
  }
  fVar10 = (fVar23 - fVar12) / (fVar10 - fVar25);
  if (*(long *)(param_1 + 0x1f8) == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = (double)(*(float *)(*(long *)(param_1 + 0x1f8) + 0xcc) * 57.295776);
  }
  FUN_006e9454((double)fVar14,(double)fVar15,(double)fVar13,(double)fVar19,(double)fVar11,
               (double)fVar9,dVar17,(double)(local_500 * 57.295776),&local_920,
               "Camera\n - Pos : %f %f %f\n - At  : %f %f %f\n - Twist : %f\n\nProjection\n - Fovy     : %f\n - Near Far : %f %f\n - Aspect   : %f\n"
              );
  local_4c0 = (undefined1 *)0x0;
  local_4b8 = (undefined1 *)0x3f80000000000000;
  fVar9 = fVar21 + local_4d0;
  fVar11 = local_4cc - fVar10;
  local_4d0 = fVar9;
  local_4cc = fVar11;
  (**(code **)(local_920 + 0x18))(&local_920);
  puVar1 = auStack_480;
  iVar2 = 0x200;
  if (local_498 != (undefined1 *)0x0) {
    puVar1 = local_498;
    iVar2 = local_490;
  }
  FUN_038d4cb0(puVar1,iVar2,local_918,iVar2 + -1);
  FUN_038e7464(&local_4f8,puVar1,0xffffffff,1,0);
  local_4d0 = fVar9 - fVar21;
  local_4cc = fVar10 + fVar11;
  local_4c0 = &DAT_3f8000003f800000;
  local_4b8 = &DAT_3f8000003f800000;
  (**(code **)(local_920 + 0x18))(&local_920);
  puVar1 = auStack_480;
  iVar2 = 0x200;
  if (local_498 != (undefined1 *)0x0) {
    puVar1 = local_498;
    iVar2 = local_490;
  }
  FUN_038d4cb0(puVar1,iVar2,local_918,iVar2 + -1);
  FUN_038e7464(&local_4f8,puVar1,0xffffffff,1,0);
  return;
}

